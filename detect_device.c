#define INTEL_VENDER_ID 0x8168
#define INTEL_DEVICE_ID 0x100E

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/stddef.h>
#include <linux/init.h>
#include <linux/pci.h>
/*
int init_module(void){
    struct pci_dev *pdev;
    pdev = pci_get_device(REALTEK_VENDER_ID, REALTEK_DEVICE_ID, NULL);
    if (!pdev)
        printk("<l>Device not found\n");
    else
        printk("<l>============Device found============");
    return 0;
}
*/


static struct pci_dev* probe_device(void)
{
    struct pci_dev *pdev = NULL;
    //Ensure we are not working on a non PCI system
    if (!pci_present()){
        LOG_MSG("PCI not present\n");
        return pdev;
    }

    // Look for Intel device
    pdev = pci_get_device(INTEL_VENDER_ID, INTEL_DEVICE_ID, NULL);

    if (pdev){
        LOG_MSG("============Device found===========\n");
        // Device found, enable it
        if (pci_enable_device(pdev)){
            LOG_MSG("Could not enable the device\n");
            return NULL;
        }else
            LOG_MSG("Device enabled\n");
    }else
        LOG_MSG("============Device not found==========\n")

    return pdev;
}

int init_module(void){
    struct pci_dev *pdev;
    pdev = probe_device();
    if (!pdev)
        return 0;
    return 0;
}

int exit_module(void){
    printk(KERNEL_ALERT "good bye")
}

module_init(init_module);
module_exit(exit_module);
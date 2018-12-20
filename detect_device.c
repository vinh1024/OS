#define REALTEK_VENDER_ID 0x10EC
#define REALTEK_DEVICE_ID 0x8168

#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/stddef.h>
#include <linux/pci.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("vinhnt");
MODULE_DESCRIPTION("A simple detecting device");
MODULE_VERSION("0.01");
static int __init init_M(void){
    struct pci_dev *pdev;
    pdev = pci_get_device(REALTEK_VENDER_ID, REALTEK_DEVICE_ID, NULL);
    if (!pdev)
        printk("<l>Device not found\n");
    else
        printk("<l>============Device found============");
    return 0;
}

static void __exit exit_M(void){
	printk("Goodbye");
}

module_init(init_M);
module_exit(exit_M);

.1.1
User View
The user’s view of the computer varies according to the interface being used. Most computer users sit in front of a PC , consisting of a monitor, keyboard, mouse, and system unit. Such a system is designed for one user to monopolize its resources. The goal is to maximize the work (or play) that the user is performing. In this case, the operating system is designed mostly for ease of use, with some attention paid to performance and none paid to resource utilization —how various hardware and software resources are shared. Performance is, of course, important to the user; but such systems are optimized for the single-user experience rather than the requirements of multiple users. In other cases, a user sits at a terminal connected to a mainframe or a minicomputer. Other users are accessing the same computer through other terminals. These users share resources and may exchange information. The operating system in such cases is designed to maximize resource utilization— to assure that all available CPU time, memory, and I/O are used efficiently and that no individual user takes more than her fair share. In still other cases, users sit at workstations connected to networks of other workstations and servers. These users have dedicated resources at their disposal, but they also share resources such as networking and servers, including file, compute, and print servers. Therefore, their operating system is designed to compromise between individual usability and resource utilization. Recently, many varieties of mobile computers, such as smartphones and tablets, have come into fashion. Most mobile computers are standalone units for individual users. Quite often, they are connected to networks through cellular or other wireless technologies. Increasingly, these mobile devices are replacing desktop and laptop computers for people who are primarily interested in using computers for e-mail and web browsing. The user interface for mobile computers generally features a touch screen, where the user interacts with the system by pressing and swiping fingers across the screen rather than using a physical keyboard and mouse. Some computers have little or no user view. For example, embedded computers in home devices and automobiles may have numeric keypads and may turn indicator lights on or off to show status, but they and their operating systems are designed primarily to run without user intervention.
1.1.2
System View
From the computer’s point of view, the operating system is the program
most intimately involved with the hardware. In this context, we can view
an operating system as a resource allocator. A computer system has many
resources that may be required to solve a problem: CPU time, memory space,
file-storage space, I/O devices, and so on. The operating system acts as the
manager of these resources. Facing numerous and possibly conflicting requests
for resources, the operating system must decide how to allocate them to specific
programs and users so that it can operate the computer system efficiently and
fairly. As we have seen, resource allocation is especially important where many
users access the same mainframe or minicomputer.
A slightly different view of an operating system emphasizes the need to
control the various I/O devices and user programs. An operating system is a
control program. A control program manages the execution of user programs
to prevent errors and improper use of the computer. It is especially concerned
with the operation and control of I/O devices.6
Chapter 1 Introduction
1.1.3
Defining Operating Systems
By now, you can probably see that the term operating system covers many roles
and functions. That is the case, at least in part, because of the myriad designs
and uses of computers. Computers are present within toasters, cars, ships,
spacecraft, homes, and businesses. They are the basis for game machines, music
players, cable TV tuners, and industrial control systems. Although computers
have a relatively short history, they have evolved rapidly. Computing started
as an experiment to determine what could be done and quickly moved to
fixed-purpose systems for military uses, such as code breaking and trajectory
plotting, and governmental uses, such as census calculation. Those early
computers evolved into general-purpose, multifunction mainframes, and
that’s when operating systems were born. In the 1960s, Moore’s Law predicted
that the number of transistors on an integrated circuit would double every
eighteen months, and that prediction has held true. Computers gained in
functionality and shrunk in size, leading to a vast number of uses and a vast
number and variety of operating systems. (See Chapter 20 for more details on
the history of operating systems.)
How, then, can we define what an operating system is? In general, we have
no completely adequate definition of an operating system. Operating systems
exist because they offer a reasonable way to solve the problem of creating a
usable computing system. The fundamental goal of computer systems is to
execute user programs and to make solving user problems easier. Computer
hardware is constructed toward this goal. Since bare hardware alone is not
particularly easy to use, application programs are developed. These programs
require certain common operations, such as those controlling the I/O devices.
The common functions of controlling and allocating resources are then brought
together into one piece of software: the operating system.
In addition, we have no universally accepted definition of what is part of the
operating system. A simple viewpoint is that it includes everything a vendor
ships when you order “the operating system.” The features included, however,
vary greatly across systems. Some systems take up less than a megabyte of
space and lack even a full-screen editor, whereas others require gigabytes of
space and are based entirely on graphical windowing systems. A more common
definition, and the one that we usually follow, is that the operating system
is the one program running at all times on the computer—usually called
the kernel. (Along with the kernel, there are two other types of programs:
system programs, which are associated with the operating system but are not
necessarily part of the kernel, and application programs, which include all
programs not associated with the operation of the system.)
The matter of what constitutes an operating system became increasingly
important as personal computers became more widespread and operating
systems grew increasingly sophisticated. In 1998, the United States Department
of Justice filed suit against Microsoft, in essence claiming that Microsoft
included too much functionality in its operating systems and thus prevented
application vendors from competing. (For example, a Web browser was an
integral part of the operating systems.) As a result, Microsoft was found guilty
of using its operating-system monopoly to limit competition.
Today, however, if we look at operating systems for mobile devices, we
see that once again the number of features constituting the operating system1.2 Computer-System Organization
7
is increasing. Mobile operating systems often include not only a core kernel
but also middleware—a set of software frameworks that provide additional
services to application developers. For example, each of the two most promi-
nent mobile operating systems—Apple’s i OS and Google’s Android —features
a core kernel along with middleware that supports databases, multimedia, and
graphics (to name a only few).
1.2
Computer-System Organization
Before we can explore the details of how computer systems operate, we need
general knowledge of the structure of a computer system. In this section,
we look at several parts of this structure. The section is mostly concerned
with computer-system organization, so you can skim or skip it if you already
understand the concepts.
1.2.1
Computer-System Operation
A modern general-purpose computer system consists of one or more CPU s
and a number of device controllers connected through a common bus that
provides access to shared memory (Figure 1.2). Each device controller is in
charge of a specific type of device (for example, disk drives, audio devices,
or video displays). The CPU and the device controllers can execute in parallel,
competing for memory cycles. To ensure orderly access to the shared memory,
a memory controller synchronizes access to the memory.
For a computer to start running—for instance, when it is powered up or
rebooted —it needs to have an initial program to run. This initial program,
or bootstrap program, tends to be simple. Typically, it is stored within
the computer hardware in read-only memory ( ROM ) or electrically erasable
programmable read-only memory ( EEPROM ), known by the general term
firmware. It initializes all aspects of the system, from CPU registers to device
controllers to memory contents. The bootstrap program must know how to load
the operating system and how to start executing that system. To accomplish
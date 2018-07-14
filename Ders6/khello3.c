/*
 *  hello-3.c - Illustrating the __init, __initdata and __exit macros.
 */

#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */
#include <linux/init.h>		/* Needed for the macros */

static int khello3_data __initdata = 3;

static int __init khello3_init(void)
{
    printk(KERN_INFO "Hello, World! %d\n", khello3_data);
    return 0;
}

static void __exit khello3_exit(void)
{
    printk(KERN_INFO "Godbye, World! \n");
}

module_init(khello3_init);
module_exit(khello3_exit);

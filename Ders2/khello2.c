/*
 *    khello2.c - Demonstrating the module_init() and module_exit() macros.
 *    This is preferred over using init_module() and cleanup_module().
 */

#include <linux/module.h>   /* Needed by all module */
#include <linux/kernel.h>   /* Needed for KERN_INFO */
#include <linux/init.h>     /* Needed for the macros */

static int __init khello_2_init(void)
{
    printk(KERN_INFO "Hello, World! \n");
    return 0;
}

static void __exit khello_2_exit(void)
{
    printk(KERN_INFO "Godbye, World ! \n");
}

module_init(khello_2_init);
module_exit(khello_2_exit);

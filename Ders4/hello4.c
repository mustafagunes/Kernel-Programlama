/*
 *  hello-4.c - Demonstrates module documentation.
 */


 /*
  * The following license idents are currently accepted as indicating free
  * software modules
  *
  *	"GPL"				[GNU Public License v2 or later]
  *	"GPL v2"			[GNU Public License v2]
  *	"GPL and additional rights"	[GNU Public License v2 rights and more]
  *	"Dual BSD/GPL"			[GNU Public License v2
  *					 or BSD license choice]
  *	"Dual MIT/GPL"			[GNU Public License v2
  *					 or MIT license choice]
  *	"Dual MPL/GPL"			[GNU Public License v2
  *					 or Mozilla license choice]
  *
  * The following other idents are available
  *
  *	"Proprietary"			[Non free products]
  *
  * There are dual licensed components, but when running with Linux it is the
  * GPL that is relevant so this is a non issue. Similarly LGPL linked with GPL
  * is a GPL combined work.
  *
  * This exists for several reasons
  * 1.	So modinfo can show license info for users wanting to vet their setup
  *	is free
  * 2.	So the community can ignore bug reports including proprietary modules
  * 3.	So vendors can do likewise based on their own policies
  */


#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */
#include <linux/init.h>		/* Needed for the macros */
#define DRIVER_AUTHOR "Mustafa Gunes <gunes149@gmail.com>"
#define DRIVER_DESC   "A sample driver"

static int __init init_hello_4(void)
{
	printk(KERN_INFO "Hello World! \n");
	return 0;
}

static void __exit cleanup_hello_4(void)
{
	printk(KERN_INFO "Goodbye World! \n");
}

module_init(init_hello_4);
module_exit(cleanup_hello_4);

/* You can use strings, like this: -- Kullanım aşağıdadır. */

/* Get rid of taint message by declaring code as GPL. -- Modulun lisansı aşağıdaki şekilde verilir. */
MODULE_LICENSE("GPL");

/* Who wrote this module? -- Modülü kim yazdi ? */
MODULE_AUTHOR(DRIVER_AUTHOR);

/* What does this module do -- Modul hakkinda açiklama */
MODULE_DESCRIPTION(DRIVER_DESC);

/*
 *  This module uses /dev/testdevice.  The MODULE_SUPPORTED_DEVICE macro might
 *  be used in the future to help automatic configuration of modules, but is
 *  currently unused other than for documentation purposes.
 */
MODULE_SUPPORTED_DEVICE("testdevice");

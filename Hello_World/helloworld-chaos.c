#include <linux/kernel.h>
#include <linux/module.h>

static int __init helloworld_chaos_init(void)
{
	printk(KERN_INFO, "Chaos: Hello world!\n");
	return 0;
}

static void __exit helloworld_chaos_exit(void)
{
	printk(KERN_INFO, "Chaos: Bye!\n");
}

MODULE_AUTHOR("Chaos Shen");
MODULE_DESCRIPTION("A dummy hello-world module");

module_init(helloworld_chaos_init);
module_exit(helloworld_chaos_exit);

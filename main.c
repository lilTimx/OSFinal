#include <linux/kernel.h>

int init_module(void)
{
 int stud_number = 1;
 char name[] = "Temirlan";
 
 printk(KERN_INFO "My name is %s and number %d\n", name, stud_number);
 printk(KERN_INFO "My groupmates are: Abylay, Dinara, Dastan, Askhat.");
 return 0;
}

void cleanup_module(void)
{
 printk(KERN_INFO "Goodbye!\n");
}

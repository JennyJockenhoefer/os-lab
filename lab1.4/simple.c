#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/jiffies.h>
#include <linux/utsname.h>


void uptime(void);
void getSystemInfo(void);
void list(void);
void addStudents(int ID, int age, char*name);
/* This function is called when the module is loaded. */
int simple_init(void)
{
       printk(KERN_INFO "Loading Module\n");
	uptime();
	getSystemInfo();
	addStudents(3, 5, "Jenny");
	list();

       return 0;
}

/* This function is called when the module is removed. */
void simple_exit(void) {
	printk(KERN_INFO "Removing Module\n");
}
void uptime() {
	printk("Uptime: %i\n", jiffies_to_msecs(get_jiffies_64())/1000);
}
void getSystemInfo() {
	struct new_utsname *buf;
	buf = utsname();

	printk("Nodename: %s\n", buf->nodename);
	printk("Machine %s\n" , buf-> machine);
	printk("Sysname: %s\n", buf-> sysname);
	printk("Release: %s\n", buf->release);
	printk("Version: %s\n", buf->version);
#ifdef __linux__
	printk("Domain Name: %s\n", buf->domainname);
#endif
} 


typedef struct student {
	int ID, age;
	char* name;  
};
int a = 3;
struct student STUDENT[3];

void addStudents(int ID, int age, char*name) {
STUDENT[a].ID= ID;
STUDENT[a].age= age;
STUDENT[a].name= name;
a= a+1;
}

void list (void) {
	int i;
	printk("Student Array: => \n");
	for(i =0; i<a; i++) {
	printk("Name %s\n", STUDENT[i].name);	
	printk("ID %i\n", STUDENT[i].ID);
	printk("Age %i\n", STUDENT[i].age);

	}
}
	

/* Macros for registering module entry and exit points. */
module_init( simple_init );
module_exit( simple_exit );

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("SGG");


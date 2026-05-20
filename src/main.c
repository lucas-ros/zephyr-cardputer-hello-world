#include <zephyr/kernel.h>

int main(void)
{
    static int a = 0;
    while(1) {
        printk("Hello from meu_app! %d\n", a);
	a++;
        k_msleep(5000);
    }
}

#include<stdio.h>
void main()
{
    int a=92;
    int*p=&a;
    printf("a value is%d\n",a);
    printf("a adress is %p\n",p);
    printf("p points to %d",*p);
}
//out put value is92//
//a adress is 0x7ffc6c5e2684//
//p points to 92//
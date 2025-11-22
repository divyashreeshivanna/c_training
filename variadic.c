//write a c prgram with a function with variadic 
#include<stdio.h>
#include<stdarg.h>
void display(int count,...)
{
    int result=0;
    va_list list;
    va_start(list,count);
    for(int i=1;i<=count;i++)
    {
        int n=va_arg(list,int);
        result=result+n;
    }
    va_end(list);
    printf("%d  ",result);
}
void main()
{
    display(5,97,65,98,10,45);

}
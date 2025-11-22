#include<stdio.h>
void sum_value(int a,int b)
{
    int sum=a+b;
    printf("%d\n",sum);//call by value
}
void sum_ref(int*a,int*b)
{
    int sum=*a+*b;
    printf("%d",sum);//call by reference
}
void main()
{
    int a=10;
    int b=20;
    sum_value(a,b);
    sum_ref(&a,&b);
}
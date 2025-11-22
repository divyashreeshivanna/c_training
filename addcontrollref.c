//write a function which will addition of  three numbers and call it by reference
#include<stdio.h>
void sum(int*a,int*b,int*c)
{
    int sum=*a + *b + *c;
    printf("%d",sum);
}
void main()
{
    int a=12;
    int b=13;
    int c=14;
    sum(&a,&b,&c);
}
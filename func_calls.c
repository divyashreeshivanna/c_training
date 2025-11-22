//write a function which will multiply three numbers and call it by reference
#include<stdio.h>
void product(int*a,int*b,int*c)
{
    int product=*a * *b * *c;
    printf("%d",product);
}
void main()
{
    int a=12;
    int b=13;
    int c=14;
    product(&a,&b,&c);
}
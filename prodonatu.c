//write a c program to generate product of n natural numbers//
#include<stdio.h>
void main()
{
int result =1;
int n;
printf("enter n :");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    result=result*i;
}
printf("product is%d",result);
}
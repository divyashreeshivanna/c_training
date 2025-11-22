#include<stdio.h>//fibonesis series//
void fibo(int n)
{
int a=0;
int b=1;
for(int i=0;i<n;i++)
{
    printf("%d   ",a);
    int sum=a+b;
    a=b;
    b=sum;
}
}
void main()
{
    int n;
    printf("enter the n:\n");
    scanf("%d",&n);
    fibo(n);
}//out put enter the n:
//5
//0   1   1   2   3  
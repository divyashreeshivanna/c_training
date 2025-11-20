#include<stdio.h>
int sum_digit(int n)
{
    int digit,result=0;
    while(n!=0)
    {
        digit=n%10;
        result=result+digit;
        n=n/10;
    }
    return result;
}
void main()
{

int n;
printf("enter the n:");
scanf("%d",&n);
printf("%d",sum_digit(n));
}
//the sum of three numbered digit will be the answer.
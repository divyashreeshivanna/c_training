#include<stdio.h>
int sum_digit_recur(int n)
{
    if(n==0)
    return 0;
    int digit=n%10;
    return digit+sum_digit_recur(n/10);
}
void main()
{
    int n=456;
printf("%d",sum_digit_recur(n));
}

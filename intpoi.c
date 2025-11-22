#include <stdio.h>
int main()
{
    int num=10;
    int*ptr;
    ptr=&num;
    printf("value of num=%d\n",num);
    printf("value of num useing pointer=%d\n",*ptr);
    return 0;
}
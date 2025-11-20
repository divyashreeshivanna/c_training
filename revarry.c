#include<stdio.h>
int main ()
{
    int arr[3]={2,3,4};
    int start=0,end=2;
    while(star<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    printf("reversed arry:");
    for(int i=0;i<3;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
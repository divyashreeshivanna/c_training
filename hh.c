//write a c function which will accept an arry ,it's size as n and writterns the difference between first and last element//
#include<stdio.h>
#include<stdlib.h>
int sub_arr(int arr[], int n)
{
    int sub=arr[0]-arr[n-1];
    return sub;
}
void main()
{
int arr[2]={30,10};
int n=2;
printf("difference=%d",difference(arr,n));
}
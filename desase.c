#include<stdio.h>
void bubble (int arr[],int n)
{
int temp=0;
for(int i=0;i<n;i++)
{
    for (int j=0;j<n;j++)
    {
        while(arr[i]<arr[j])//for desending//for assending a[i]>a[j]
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
for(int k=0;k<n;k++)
{
printf("%d ",arr[k]);
}
}
void main()
{
    int arr[6]={12,9,54,45,37,32};
    int n=6;
    bubble(arr,n);
}
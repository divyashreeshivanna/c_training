#include<stdio.h>
int search (int arr[],int key,int n)
{
for (int i=0;i<n;i++)
{
    if(arr[i]==key)
    return 1;
}
return 0;
}
void main()
{
    int arr[5]={10,20,30,40,50};
    int size=5;
    int key;
    printf("enter the key value");
    scanf("%d",&key);
    printf("%d",search(arr,key,size));
}

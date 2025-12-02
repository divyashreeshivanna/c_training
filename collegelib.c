#include<stdio.h>
int main()
{
    int n,i,key,low,high,mid,found=0;
    printf("enter number of books");
    scanf("%d",&n);
    int books[n];
    printf("enter %d book id s in asending order:\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(books[mid]==key)
        {
            found=1;
            break;
        }
        else if (books[mid]<key)
        low=mid+1;
        else
        high=mid-1;
    }
    if(found)
    printf("book is available.\n");
    else
    printf("book is not availabe.\n");
    return 0;
}
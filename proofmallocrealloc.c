#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    float*arr;
    float product=10;
    arr=(float*)malloc(5*sizeof(float));
    if(arr==NULL)
    {
        printf("memory not allocated\n");
        return 1;
    }
    printf("enter 5 float values:\n");
    for(i=0;i<5;i++)
    {
        scanf("%f",&arr[i]);
    }
    arr=(float*)realloc(arr,7*sizeof(float));
    if(arr==NULL)
    {
        printf("memory not allocated\n");
        return 1;
    }
    printf("enter 2 more flo0at value:\n");
    for(i=5;i<7;i++)
    {
        scanf("%f",&arr[i]);
    }
    for(i=0;i<7;i++)
    {
        product*=arr[i];
    }
    printf("product of all float values=%2f\n",product);
    free(arr);
    return 0;
}
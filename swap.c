#include<stdio.h>
void swap(float *b1,float *b2)
{
    printf("before hacking:A has %f B has %f",*b1,*b2);
    float temp=0;
     temp=*b1;
    *b1=*b2;
    *b2=temp;
    printf("after hacking:A has%f B has %f",*b1,*b2);

}
void main()
{
    float b1,b2;
    printf("enter the value of b1 and b2\n");
    scanf("%f%f",&b1,&b2);
    swap(&b1,&b2);
}
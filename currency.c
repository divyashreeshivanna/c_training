#include<stdio.h>
void fake_swap(float ca,float cb)
{
    float temp=0;
    temp=ca;
    ca=cb;
    cb=temp;
    printf("fake swap in fn: ca=%f cb=%f\n",ca,cb);
}
void real_swap(float*ca,float*cb)
{
    float temp=0;
    temp=*ca;
    *ca=*cb;
    *cb=temp;
    printf("real swap in fn:ca= %f cb=%f\n",*ca,*cb);
}
void main()
{
    float ca,cb;
    printf("enter the value of ca:");
    scanf("%f",&ca);
    printf("enter the value of cb:");
    scanf("%f",&cb);
    fake_swap(ca,cb);
    printf("fakw swap ca=%f  cb=%f\n",ca,cb);
    real_swap(&ca,&cb);
    printf("real swap ca=%f  cb=%f\n",ca,cb);
}
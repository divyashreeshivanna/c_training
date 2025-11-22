#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[100];
    int age;
    float marks;
};
void main()
{
    struct student s1;
    s1.age=19;
    s1.marks=99.3;
    strcpy(s1.name,"motu");

    struct student s2;
    s2.age=23;
    s2.marks=52.3;
    strcpy(s2.name,"chotu");
    
struct student s3;
    s3.age=24;
    s3.marks=52.53;
    strcpy(s2.name,"patlu");
    
    printf("%d\n",s1.age);
    printf("%f \n",s1.marks);
    printf("%s\n ",s1.name);

printf("%d\n ",s2.age);
    printf("%f\n ",s2.marks);
    printf("%s\n ",s2.name);

printf("%d\n ",s3.age);
    printf("%f\n ",s3.marks);
    printf("%s\n ",s3.name);
}
// 1. Write a function to swap values of two in variables of calling function. (TSRS)
#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("Enter the two numbers\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a = %d , b = %d",a,b);
}
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}

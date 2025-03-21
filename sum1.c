#include<stdio.h>
#include<conio.h> 
#include<stdlib.h>
int main(int argc,char*argv[])
{
    float val1,val2,sum;
    val1=atof(argv[0]);
    val1=atof(argv[1]);
    val2=atof(argv[2]);
    sum=val1+val2;
    printf("sum is :%6.f",sum);
    return 0;
}
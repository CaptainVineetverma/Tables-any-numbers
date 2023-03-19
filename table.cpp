//Question no. 31: Write a program to find table of any numbers entered by user.

#include<stdio.h>
int main()
{
int num,i,m;
printf("Enter the any numbers");
scanf("%d",&num);
for(i=1;i<=10;i++)
{
m=num*i;
printf("\n%d*%d=%d",num,i,m);
}
return 0;
}

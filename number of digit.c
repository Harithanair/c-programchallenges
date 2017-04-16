#include<stdio.h>
#include<conio.h>
int main()
{
int num,temp,count=0;
printf("enter an integer\n");
scanf("%d",&num);
while(temp!=0)
{
temp=temp/10;
++count;
}
printf("number of digit in %d",num,count);
getch();
return 0;
}

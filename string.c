#include <stdio.h>
int main()
{
char x[100],*y;
int l,m,n,o,dis=0,dis2,flag=1,temp;
scanf("%s",x);
y=x;
while(*y!='\0')
{
dis++;
y++;
}
dis2=dis;
for(l=1;l<len2;l++)
{
b=a;
for(m=1;m<=i;m++)
{
temp=dis-1;
flag=1;
 for(n=0;n<temp;n++)
 {for(o=n+1;o<temp;o++){
  if(y[n]==y[o])
  {
  flag=0;
  }
  }
 }
 if(flag==1)
 break;
 y++;
}
if(flag==1)
break;
dis--;
}
for(l=0;l<dis-1;l++)
{
printf("%c",y[l]);
}
    return 0;
}

#include<stdio.h>
#include<string.h>
void printsubstr(char *str,int down,int up )
{
for(int x=down;x<=up;++x)
printf("%c",str[x]);
}
int longestpalSubstr(char *str)
{
int maxlength=1;
int start=0;
int len=strlen(str);
int down,up;
for(int x=1;x<len;++x)
{
down=x-1;
up=x;
while(down>=0 && up<len && str[down]==str[up])
{
if(up - down+1>maxLength)
{
start=down;
maxLength=up-down+1;
}
--down;
++up;
}
down=x-1;
up=x+1;
while(down>=0 && up<len && str[down]==str[up])
{
if(up -down+1>maxLength)
{
start=down;
maxLength=up-down+1;
}
--down;
++up;
}
}
printf("Longest Palindrome");
printsubstr(str,start,start+maxlength-1);
return maxLength;
}
int main()
{
char str[]="xyzxxmalayalamabc";
printf("malayalam");
return 0;}

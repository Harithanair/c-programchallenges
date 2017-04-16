#include<stdio.h>
int main()
{
char ch;
printf("enter the character\n');
scanf("%c",&ch);
if(ch=='a'||ch==A||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
printf("%cis a vowel\n",ch);
else
printf("%cis not a vowel"\n",ch);
return 0;
}

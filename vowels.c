//write a code to print the vowels characters from the given string
#include<stdio.h>
#include<string.h>
int main()
{
char name[100];
printf("Enter a name:\n");
scanf("%s",name);
int size=strlen(name);
for(int i=0;i<=size-1;i++)
{char ch=name[i];
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='R'||ch=='I'||ch=='O'||ch=='U')
{printf("%c \n",ch);
}
}
return 0;
}
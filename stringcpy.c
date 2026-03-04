#include<stdio.h>
#include<string.h>
int main(){
char name1[5]="magic";
char name2[6]="logic";
strcpy(name1,name2);
printf("name1:%s \t name2:%s",name1,name2);
return 0;
}
#include<stdio.h>
#include<string.h>
void main()

{
char str[90];
int i,l;
printf("enter a string ");
scanf("%s ",&str);

l=strlen(str);

for(i=l-1;i>=0;i--)
  printf("%c",str[i]);
}

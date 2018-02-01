#include<stdio.h>
void main()

{
int i,l,s=1;
printf("enter a number ");
scanf("%d ",&l);


for(i=1;i<=l;i++)
    s=s*i;
  printf("%d",s);
}

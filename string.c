#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,n,k;
char str[100];
char rev[100];
printf("Enter number:");
scanf("%s",str);
for(i=0;str[i]='\0';i++)
{
k=i;
}
for(j=0;j<=i;j++)
{
rev[j]=str[k];
k--;
}
getch();
  printf("Reverse string %s",rev);
  return 0;
}

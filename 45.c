#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,c=0,p1,p2;
char str[50],key,a[10];
scanf("%[^\n]s",str);
   printf("enter character to be searched\n");
    scanf(" %c", &key);
    for (i = 0;i <= strlen(str);i++)
    {        if (key == str[i])
    {c++;
    if(c==1)
    {p1=i;
    p2=i;
   printf("%d\n",p1+1);
   }
   else
   {p2=i;}
   }
   }    printf("%d\n", p2 + 1);}

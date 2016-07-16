#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,n;
printf("\n enter the numbers in array");
for(i=o;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("\n enter the number to be removed");
scanf("%d",&n);
for(i=0;i<5;i++)
{
if(a[i]==n)
{
a[i]=a[i+1];
}
}
printf("array after removing the element %d from the list",n);
for(i=0;i<5;i++)
{
printf("%d",a[i]);
}
}

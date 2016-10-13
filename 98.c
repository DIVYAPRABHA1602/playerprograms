#include<stdio.h>
int main()
{
int n,a[100],i,f;
printf("\n enter the number of elements in an array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n enter the element to be found");
scanf("%d",&f);
for(i=0;i<=3;i++)
if(a[i]==f)
{
printf("true");
break;
}
for(i=4;i<n;i++)
if(a[i]==f)
{printf("false");
}}

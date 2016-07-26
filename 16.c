#include<stdio.h>
#include<conio.h>
void main()
{
int c,i,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
c=1;
{
for(j=0;j<i;j++)
{
if(a[i]==a[j])
{
c++;
}
if(c==1)
{
printf("%",a[i]);
}
}

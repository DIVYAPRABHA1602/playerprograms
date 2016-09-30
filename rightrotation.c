#include<stdio.h>
int main()
{
int n,d,i,j;
scanf("%d %d",&n,&d);
int a[n],temp[d];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(j=d+1;j<n;j++)
{
printf("%d",a[j]);
}

for(i=0;i<=d;i++)
{
temp[i]=a[i];
printf("%d",temp[i]);
}

return 0;
}

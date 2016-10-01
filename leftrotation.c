#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     int n,d,i,j;
    scanf("%d %d",&n,&d);
    int a[n],temp[d];
    for( i=0;i<n;i++)
        {
        scanf("\t %d",&a[i]);
    }
     for(i=d;i<n;i++)
        {
        printf("%d ",a[i]);
        }
     
     for(j=0;j<d;j++)
        {
        temp[j]=a[j];
        printf("%d ",temp[j]);
        }
   
   
    
   
    return 0;
}
   

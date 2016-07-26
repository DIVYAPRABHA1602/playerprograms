#include<stdio.h>
#include<conio.h>
#include<string.h>
# define no_of_char 256
int anagram(char *str1,char *str2)
{
int c1[no_of_char] = {0};
int c2[no_of_char] = {0};
int i;
for (i=0;str1[i] && str2[i];i++)
{
c1[str1[i]]++;
c2[str2[i]]++;
}
if(str1[i] || str2[i])
return 0;
for(i=0;i<no_of_char;i++)
if(c1[i]!=c2[i])
return 0;
return1;
}
main()
{
char str1[100],str2[100];
int flag=0;
gets(str1);
gets(str2);
flaanagram(str1,str2);
if(flag==1)
({
printf("strings are anagrams");
}
else
{
printf("\n not anagrams");
}
return 0;
}
     
   
    

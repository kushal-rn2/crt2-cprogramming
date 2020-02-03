#include<stdio.h>
int main()
{
char str1[20],str2[20];
int i,j,a[26],b[26]={0},flag=0;
scanf("%s%s",str1,str2);
for(i=0;str1[i]!='\0';i++)
{
a[str1[i]-'a']++;
}
for(i=0;str2[i]!='\0';i++)
{
a[str2[i]-'a']++;
}
for(j=0;j<26;j++)
{
if(a[j]!=b[j])
{
flag=1;
break;
}
}
if(flag==0)
printf("anagrams");
else
printf("not an anagrams");
return 0;
}

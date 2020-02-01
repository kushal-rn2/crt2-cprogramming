#include<stdio.h>
int main()
{
char str[100],tmp[100];
int tmp,strcmp,strrev;
int n;
scanf("%s",str);
strcpy(tmp,str);
strrev(str);
n=strcmp(str,tmp);
if(n==0)
printf("1");
else
printf("-1");
return 0;
}

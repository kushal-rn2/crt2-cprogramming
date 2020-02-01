#include<stdio.h>
int main()
{
	char str[100];
	int i;
	scanf("%[^\n]s",str);//scan set
	for(i=0;str[i]!='\0';i++)
	printf("%d",i);
	return 0;
}

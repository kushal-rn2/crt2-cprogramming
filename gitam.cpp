#include<stdio.h>
int main()
{
	char str[100];
	int i,l=0;
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		l++;
	}
	printf("%d",l);
	return 0;
}

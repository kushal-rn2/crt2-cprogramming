#include<stdio.h>
int main()
{
	char str[100];
	int i,c,j;
	scanf("%[^\n]",str);
	for(i=0;str[i]!='\0';i++)
	{
		c=1;
		for(j=i+1;str[j]!='\0';j++)
		{
			if(str[i]==str[j])
		{
			c++;
			str[j]='@';
		}
		}
		if(str[i]!='@')
		printf("%c%d",str[i],c);
	}
	return 0;
}

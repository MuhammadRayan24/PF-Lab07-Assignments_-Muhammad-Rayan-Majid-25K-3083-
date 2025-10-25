#include<stdio.h>
#include<string.h>
int main ()
{
	char spaces[50];
	int count=0;
	printf("\n Enter the string: ");
	scanf ("%[^\n]",spaces);
	for (int i = 0 ; spaces[i]!='\0';i++)
	{
		if (spaces[i]==' ')
		{
			count++;
		}
	}
	printf ("\n Total white space characters in the string are: %d",count);
	return 0;
}

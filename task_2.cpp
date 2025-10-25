#include<stdio.h>
int main ()
{
int b;
printf("\n Enter the count of values to reverse: ");
scanf("%d",&b);
int arr[b];
for (int i = 0 ; i<b ; i++)
{
	scanf("%d", &arr[i]);
}
for (int i=b-1 ; i>=0 ; i--)
{
	printf("\n%d ",arr[i]);
}
	return 0;
}

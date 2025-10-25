#include<stdio.h>
int main ()
{
	int n , i , j;
	printf ("\n Enter the size: ");
	scanf("%d",&n);
	int arr[n];
	for (i=0; i<n ; i++)
	{
		printf ("\n Element %d: ", i+1);
		scanf ("%d",&arr[i]);
	}
	printf ("\n The number of duplicate elements are: ");
	int found = 0;
	for (i=0 ; i<n ; i++)
	{
		for (j=i+1 ; j<n ; j++)
		{
			if (arr[i]==arr[j])
			{
				printf("%d ",arr[i]);
				found=1;
				break;
			}
		}
	}
	if (!found)
	{
		printf ("\n No duplicate elements found! ");
	}
	printf ("\n");
	return 0;
}

#include<stdio.h>
#include<string.h>
int search (int arr[], int size , int target)
{
	for (int i=0 ;  i<size ; i++)
	{
		if (arr[i]==target)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int arr[10] , num=0 , index=0 ;
	printf("\n Enter any 10 integers: ");
	for (int i=0 ; i<10 ; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n Enter the number to search: ");
	scanf("%d",&num);
	index=search(arr, 10, num);
	if (index!=-1)
	{
		printf("\n The index of number is %d: ", index);
	}
	else 
	printf("\nNumber not found in the array");
	return 0;
}

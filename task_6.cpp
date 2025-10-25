// merge two arrays of five integers into third array of size 10.
#include<stdio.h>
#include<string.h>
int main ()
{
	int arr1[5] , arr2[5] , arr3[10], i , j;
	
    printf("\n Enter 5 integers for first array: ");
	for(int i=0 ; i<5 ; i++)
	{
	scanf("%d",&arr1[i]);
    }
    
    printf("\n Enter 5 integers for second array: ");
    for(int j=0 ; j<5 ; j++)
	{
	scanf("%d",&arr2[j]);
    }
    for (i=0 ; i<5; i++)
    {
    	arr3[i]=arr1[i];
	}
	for (j=0 ; j<5; j++)
    {
    	arr3[i+j]=arr2[j];
	}
	printf("\n Merged Array: ");
	for(i=0 ; i<10 ; i++)
	{
		printf("%d ", arr3[i]);
	}
	return 0;
}

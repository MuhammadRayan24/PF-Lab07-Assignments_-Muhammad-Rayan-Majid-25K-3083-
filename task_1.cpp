#include<stdio.h>
int main ()
{
  int a[10] , sum=0;
  printf ("\n enter the numbers: ");
  	for (int i=0 ; i < 10 ; i++)
  	{
     scanf("%d",&a[i]);
     sum+=a[i];
    }
	    printf("\n Sum = %d ",sum );
	return 0;
}

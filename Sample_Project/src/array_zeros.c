#include <stdio.h>

int Array_zero_numbers(int arr[], int n)
{
	int count = 0;
	for( int i = 0; i < n; i++)
	{
		if ( arr[i] == 0)
			count++;
		
	}
	return count;
}

int main()
{
	printf("Enter the size of the array:");
	int a = 0;
	scanf("%d",&a);
	printf("\nEnter the each array elements:\n");
	int array[a];
	for(int i = 0; i < a; i++)
	{
		printf("\narray[%d] = \n",i);
		scanf("%d",&array[i]);
	}
	printf("\nThe entered array has %d of zeros\n", Array_zero_numbers(array,a));
	return 0;
}
		
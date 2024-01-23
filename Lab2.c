#include <stdio.h>

void insertionSort(int arr[])
{
	int i, key, j;
	for (i = 1; i < 10; i++) 
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) 
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void printArray(int arr[])
{
	int i;
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver code
int main()
{
	int arr[10],i;
	printf("Enter 10 elements in the array : \n");
	for(i=0;i<10;++i)
	    scanf("%d", &arr[i]);
	   
	printf("\nUnsorted Array : ");
	printArray(arr);
	insertionSort(arr);
	printf("\n Sorted Array : ");
	printArray(arr);

	return 0;
}

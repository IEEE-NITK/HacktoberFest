#include<stdio.h>

int main()
{
	int A[100], j, i, size, key;
	printf("Enter the size: ");
	scanf("%d", &size);
	printf("Enter elements below: \n");
	for(i=0; i<size; i++)
		scanf("%d", &A[i]);
	printf("\nSorting.....\n");
	for(j=1; j<size; j++)
		{
			key = A[j];
			i = j-1;
			while((i>-1) && (A[i] >= key))
				{
					A[i+1] = A[i];
					i--;
				}
			A[i+1] = key;
		}
	printf("Here is the sorted array: \n");
	for(i=0; i<size; i++)
		printf("%d ", A[i]);
	printf("\n");
	return 0;
}

#include <stdio.h>

void bubbleSort (int *v, int size)
{
	int i, j;
	for(i = 1; i < size; i++)
		for(j = 0; j < size - i; j++)
			if(v[j] > v[j+1])
			{
				int temp = v[j];
				v[j] = v[j+1];
				v[j+1] = temp;
			}
	
}

int main()
{
	int v[] = {5, 4, 3, 2, 1}, i;
	printf("Vetor antes de ser ordenado:\n");
	for(i = 0; i < 5; i++)
		printf("%d ",v[i]);
	
	bubbleSort(v,5);
	
	printf("\nVetor depois de ordenado:\n");
	for(i = 0; i < 5; i++)
		printf("%d ",v[i]);
	printf("\n");
}

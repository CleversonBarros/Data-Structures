#include <stdio.h>

void bubbleSort (int *v, int size)
{
	int i, j;
	for(i = 0; i < size; i++)
		for(j = i + 1; j < size; j++)
			if(v[i] > v[j])
			{
				int temp = v[j];
				v[j] = v[i];
				v[i] = temp;
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
#include <stdio.h>

void bubbleSort (int *v, int size)
{
	int i, flag = 0;
	for(i = 0; i < size - 1; i++)
		if(v[i] > v[i+1])
		{
			int temp = v[i+1];
			v[i+1] = v[i];
			v[i] = temp;
			flag = 1;
		}
	if(flag) bubbleSort(v, size-1);
		
	
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
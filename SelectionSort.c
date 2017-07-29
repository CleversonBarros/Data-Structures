#include <stdio.h>
void selectionSort(int *v, int n)
{
	int i, j, min, aux;
	for(i = 0; i < n; i++)
	{
		min = i;
		for(j = i + 1; j < n; j++)
		{
			if(v[j] < v[min])
			{
				min = j;
			}
		}
		aux = v[i];
		v[i] = v[min];
		v[min] = aux;
	}
}

int main()
{
	int v[] = {5,4,3,2,1}, i;

	printf("Antes da ordenação:\n");
	for(i = 0; i < 5; i++)
	{
		printf("%d ",v[i]);
	}
	selectionSort(v,5);
	printf("\nDepois da ordenação:\n");
	for(i = 0; i < 5; i++)
	{
		printf("%d ",v[i]);
	}
	printf("\n");
}
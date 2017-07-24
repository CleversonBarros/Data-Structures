#include <stdio.h>

int binarySearch(int *v, int size, int key)
{
	int right = 0, left = size - 1;
	int mid;
	while(right <= left)
	{
		mid = (left+right) / 2;
		if(v[mid] == key)
		{
			return mid;
		}
		else if(v[mid] < key)
		{
			right = mid + 1;
		}
		else
		{
			left = mid - 1;
		}
	}
	return -1;
}

int main()
{
	int v[]={1,2,3,4,5}, a;
	
	a = binarySearch(v,5,2);
	if(a == -1)
	{
		printf("Não encontrado!\n");
	}
	else
	{
		printf("Encontrado, posicao: %d\n",a);
	}
	
}
#include <stdio.h>

int binarySearch(int *v, int size, int key)
{
	int left = 0, right = size - 1;
	int mid;
	while(left <= right)
	{
		mid = (left+right) / 2;
		if(v[mid] == key)
		{
			return mid;
		}
		else if(v[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
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

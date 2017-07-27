#include <stdio.h>

int binarySearch(int *v, int left, int right, int key)
{
	int mid = (left+right)/2;
	if(left > right) return -1;
	else
	{
		if(v[mid] == key)
		{
			return mid;
		}
		else if(v[mid] < key)
		{
			return binarySearch(v,mid+1,right,key);
		}
		else
		{
			return binarySearch(v,left,mid-1,key);
		}
	}
	
}

int main()
{
	int v[]={1,2,3,4,5}, a;
	
	a = binarySearch(v,0,5,5);
	if(a == -1)
	{
		printf("Não encontrado!\n");
	}
	else
	{
		printf("Encontrado, posicao: %d\n",a);
	}
	
}

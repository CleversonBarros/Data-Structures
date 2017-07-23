#include <stdio.h>
#include <stdlib.h>

int square(int x)
{
	return x * x;
}

int factorial(int x)
{
	if(x == 0) return 1;
	else
	{
		return x * factorial(x-1);
	}
}

int *map(int *v, int size, int (*cmp)(int))
{
	int i, *p;
	p = malloc(size*sizeof(int));

	for(i = 0; i < size; i++)
	{
		p[i] = cmp(v[i]);
	}

	return p;

}

int main()
{
	int *v, i, n,*p;
	
	printf("Digite o tamanho do array: ");
	scanf("%d", &n);
	printf("\nDigite os %d valores do seu array: ",n);
	v = malloc(n*sizeof(int));
	
	for(i = 0; i < n; i++)
	{
		scanf("%d",(v+i));
	}
	p = map(v,n,factorial);

	printf("Após aplicar a função map, o novo array retornado foi:\n");

	for(i = 0; i < n; i++)
	{
		printf("%d ",p[i]);
	}
	printf("\n");

}
#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
	return a + b;
}

int product(int a, int b)
{
	return a * b;
}

int reduce(int *v, int size, int (*cmp)(int, int))
{
	int result = v[0], i;

	for(i = 1; i < size; i++)
	{
		result =  cmp(result, v[i]);
	}

	return result;
}

int main()
{
	int *v, i, n, x;
	
	printf("Digite o tamanho do array: ");
	scanf("%d", &n);
	printf("\nDigite os %d valores do seu array: ",n);
	v = malloc(n*sizeof(int));
	
	for(i = 0; i < n; i++)
	{
		scanf("%d",(v+i));
	}
	x = reduce(v,n,product);

	printf("Após aplicar a função reduce o resultado foi:\n");
	printf("%d\n",x);

}
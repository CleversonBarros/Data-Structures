#include <stdio.h>
#include <stdlib.h>

int even(int x)
{
	return (x % 2 == 0) ? 0 : 1;
}

int odd(int x)
{
	return (x % 2 == 0) ? 1 : 0;
}

int *filter(int *v, int size, int (*cmp)(int), int *n)
{
	int i, j, *p;
	p = malloc(1*sizeof(int));

	for(i = 0, j = 0; i < size; i++)
	{
		if(cmp(v[i]))
		{
			if(j > 0)
			{
				p = realloc(p, (j+1)*sizeof(int));	
			}
			p[j++] = v[i];
		}
	}

	*n = j;
	return p;

}

int main()
{
	int *v, i, n, *p, n2;
	
	printf("Digite o tamanho do array: ");
	scanf("%d", &n);
	printf("\nDigite os %d valores do seu array: ",n);
	v = malloc(n*sizeof(int));
	
	for(i = 0; i < n; i++)
	{
		scanf("%d",(v+i));
	}
	p = filter(v, n, odd, &n2);

	if(n2)
	{
		printf("Após aplicar a função filter o novo array retornado foi:\n");
		for(i = 0; i < n2; i++)
		{
			printf("%d ",p[i]);
		}
	}
	else
	{
		printf("Não há nenhum valor que atenda aos requisitos de filtragem");
	}
	printf("\n");

}


#include <iostream>
#include <stdio.h>

int main() 
{
	system("cls");
	int A=0;
	printf("informe um numero inteiro A\n");
	scanf("%i", &A);
	int B=0;
	printf("informe um numero inteiro B\n");
	scanf("%i", &B);
	if(A>B)
	{
		printf("A e MAIOR QUE B\n");
	}
	else
	{
		if(A<B)
		{
			printf("B e MAIOR QUE A\n");
		}
		else
		{
			printf("B e IGUAL A\n");
		}
	}
}

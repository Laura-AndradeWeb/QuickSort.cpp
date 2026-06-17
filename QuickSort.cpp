/*
	Name: QuickSort.cpp
	Author: Laura Farias
	Date: 12/05/26 11:37
	Description: Implementação do método de ordenação quick sort
*/
#include <stdio.h>

//seção de prototipação
void swap(int *, int *);//troca elementos
int partition(int *, int, int);//particiona o vetor
void quickSort(int *, int, int);

main()
{
	
	int vet[] = {17, 38, 12, 2, 44, 25 , 19, -4 , 30, 10};
	int i;
	int tam = sizeof(vet)/sizeof(int);
	
	puts("Vetor Original: ");
	for(i = 0; i < tam; i++)
	{
		printf("%d|", vet[i]);
	}
	
	puts("\nVetor Ordenado: ");
	
	quickSort(vet, 0, tam-1);
	
	for(i = 0; i < tam; i++)
	{
		printf("%d|", vet[i]);
	}
	
	
}//fim do programa

//função que realiza as partições do conjunto de dados
int partition(int *V, int inicio, int fim)
{
	
	int pivot = V[inicio]; //Primeiro elemento como pivot
	int i = (fim + 1);
	
	for(int j = fim; j >= inicio + 1; j--)
	{
		
		if(V[j] >= pivot)
		{
			i--;
			swap(&V[i], &V[j]);
		}
		
	}
	
	swap(&V[i-1], &V[inicio]);
	return (i-1);
	
}

//função principal do quick sort
void quickSort(int *V, int inicio, int fim)
{
	
	if(inicio < fim)
	{
		int pivot = partition(V, inicio, fim);
		quickSort(V, inicio, pivot - 1);//partição do lado esquerdo
		quickSort(V, pivot + 1, fim);
	}
	
}

//função que faz as trocas dos elementos entre si
void swap(int *a , int *b)
{
	
	int aux = *a;
	*a = *b;
	*b = aux;
	
}
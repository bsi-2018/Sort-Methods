#include<iostream>
#include<random>
#include<time.h>
#include<stdlib.h>
#include<locale.h>

using namespace std;

int qtde=100;

void quicksort(int vetor[], int inicio, int fim)
{
	int i, j, pivo, aux;
	i = inicio;
	j = fim-1;
	pivo = vetor[(inicio + fim) / 2];
	while(i <= j)
	{
		while(vetor[i] < pivo && i < fim)
		{
			i++;
		}
		while(vetor[j] > pivo && j > inicio){
			j--;
		}
		if(i <= j)
		{
			aux = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = aux;
			i++;
			j--;
		}
	}
	if(j > inicio)
		quicksort(vetor, inicio, j+1);
	if(i < fim)
		quicksort(vetor, i, fim);
}


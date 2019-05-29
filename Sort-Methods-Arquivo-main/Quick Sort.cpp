#include<iostream>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<chrono>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

using namespace std;
void quickSort(int vetor[], int inicio, int fim)
{

	int i, j, pivo, aux, cont=0;
	i = inicio;
	j = fim-1;
	pivo = vetor[(inicio + fim) / 2];
	while(i <= j)
	{
	    cont++;
		while(vetor[i] < pivo && i < fim)
		{
			i++;
			cont++;
		}
		while(vetor[j] > pivo && j > inicio){
			j--;
			cont++;
		}
		if(i <= j)
		{
			aux = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = aux;
			i++;
			j--;
			cont++;
		}
	}
	if(j > inicio)
		quickSort(vetor, inicio, j+1);
		cont++;
	if(i < fim)
		quickSort(vetor, i, fim);
		cont++;
}

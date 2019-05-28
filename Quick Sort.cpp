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
void quicksort(int vetor[], int inicio, int fim)
{
    auto start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo
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
		quicksort(vetor, inicio, j+1);
		cont++;
	if(i < fim)
		quicksort(vetor, i, fim);
		cont++;
		auto end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
		cout<< "tempo de execução em segundos: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"S"<<endl;//retorno do comando para medir o tempo de execuчуo do codigo em segundos
}

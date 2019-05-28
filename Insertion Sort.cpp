#include<iostream>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

using namespace std;

void insertionSort(int vetor[], int tamanhoVetor) {

int escolhido, j;

    for (int i = tamanhoVetor; i >= 0; i--) {
		escolhido = vetor[i];
		j = i + 1;

		while ((j <= tamanhoVetor-1) && (vetor[j] < escolhido)) {
			vetor[j - 1] = vetor[j];
			j++;
		}

		vetor[j - 1] = escolhido;
	}
}

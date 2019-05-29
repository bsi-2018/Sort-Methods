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
void insertionSort(int vetor[], int tamanhoVetor) {

int escolhido, j, cont=0;

auto start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo

    for (int i = tamanhoVetor; i >= 0; i--) {
        cont++;
		escolhido = vetor[i];
		j = i + 1;

		while ((j <= tamanhoVetor-1) && (vetor[j] < escolhido)) {
            cont++;

			vetor[j - 1] = vetor[j];
			j++;
		}

		vetor[j - 1] = escolhido;

	}
    auto end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
	cout<< "tempo de execução em segundos: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"S"<<endl;//retorno do comando para medir o tempo de execuчуo do codigo em segundos
}

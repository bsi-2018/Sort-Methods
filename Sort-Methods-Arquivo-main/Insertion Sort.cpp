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

long long int cont=0, mov=0;
int escolhido, j;

auto start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo

    for (int i = tamanhoVetor; i >= 0; i--) {
        cont++;
		escolhido = vetor[i];
		mov++;
		j = i + 1;

		while ((j <= tamanhoVetor-1) && (vetor[j] < escolhido)) {
            cont++;
			vetor[j - 1] = vetor[j];
			mov++;
			j++;
		}

		vetor[j - 1] = escolhido;
		mov++;

	}
    cout<<"O numero de comparações é: "<<cont<<endl;
    cout<<"O numero de movimentações é: "<<mov<<endl;
    auto end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
	cout <<"tempo de execução: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"s " <<chrono::duration_cast<chrono::milliseconds>(end - start).count()<<"ms "<<chrono::duration_cast<chrono::nanoseconds>(end - start).count()<<"ns " <<endl;
}

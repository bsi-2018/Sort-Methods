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
void SelectionSort(int vetor[], int qtde){

    int cont=0;
    auto start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo
    for (int indice = 0; indice < qtde; ++indice) {
        cont++;
        int indiceMenor = indice;
        for (int indiceSeguinte = indice+1; indiceSeguinte < qtde; ++indiceSeguinte) {
            cont++;
            if (vetor[indiceSeguinte] < vetor[indiceMenor]) {
                cont++;
                indiceMenor = indiceSeguinte;
            }
        }
        int aux = vetor[indice];
        vetor[indice] = vetor[indiceMenor];
        vetor[indiceMenor] = aux;
    }
    auto end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
    cout<< "tempo de execução em segundos: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"S"<<endl;//retorno do comando para medir o tempo de execuчуo do codigo em segundos
}

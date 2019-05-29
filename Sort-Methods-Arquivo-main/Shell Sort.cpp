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
void shellSort(int vetor[], int tam){

    int aux, j, cont=0;

     auto start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo

    for (int gap = tam/2; gap > 0; gap /= 2){
            cont++;
        for (int i = gap; i < tam; i += 1)
        {
            cont++;
            aux = vetor[i];
            cont++;
            for (j = i; j >= gap && vetor[j - gap] > aux; j = j - gap){
                vetor[j] = vetor[j - gap];
                cont++;
            }
            vetor[j] = aux;
            cont++;
        }
    }
    auto end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
    cout<< "tempo de execução em segundos: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"S"<<endl;//retorno do comando para medir o tempo de execuчуo do codigo em segundos
}

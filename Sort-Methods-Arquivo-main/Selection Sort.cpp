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
void selectionSort(int vetor[], int qtde){

    long long int cont=0, mov=0;

    auto start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo
    for (int indice = 0; indice < qtde; ++indice) {
        cont++;
        int indiceMenor = indice;
        mov++;
        for (int indiceSeguinte = indice+1; indiceSeguinte < qtde; ++indiceSeguinte) {
            cont++;
            if (vetor[indiceSeguinte] < vetor[indiceMenor]) {
                cont++;
                indiceMenor = indiceSeguinte;
                mov++;
            }
        }
        int aux = vetor[indice];
        mov++;
        vetor[indice] = vetor[indiceMenor];
        mov++;
        vetor[indiceMenor] = aux;
        mov++;
    }
    
    auto end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
    cout <<"Tempo de execução: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"s " <<chrono::duration_cast<chrono::milliseconds>(end - start).count()<<"ms "<<chrono::duration_cast<chrono::nanoseconds>(end - start).count()<<"ns " <<endl;
    cout<<"O numero de comparações é: "<<cont<<endl;
    cout<<"O numero de movimentações é: "<<mov<<endl;
}

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

    long long int cont=0, mov=0;
    int aux, j;

     auto start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo

    for (int gap = tam/2; gap > 0; gap /= 2){
            cont++;
        for (int i = gap; i < tam; i += 1)
        {
            cont++;
            aux = vetor[i];
            mov++;
            for (j = i; j >= gap && vetor[j - gap] > aux; j = j - gap){
                vetor[j] = vetor[j - gap];
                mov++;
                cont++;

            }
            vetor[j] = aux;
            mov++;
        }
    }

    auto end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
    cout <<"Tempo de execução: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"s " <<chrono::duration_cast<chrono::milliseconds>(end - start).count()<<"ms "<<chrono::duration_cast<chrono::nanoseconds>(end - start).count()<<"ns " <<endl;
    cout<<"O numero de comparações é: "<<cont<<endl;
    cout<<"O numero de movimentações é: "<<mov<<endl;
}

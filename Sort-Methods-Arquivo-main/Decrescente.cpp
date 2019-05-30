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
int* shellSort2(int *vetor, int tam){

    int aux, j;

     auto start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo

    for (int gap = tam/2; gap > 0; gap /= 2){
          
        for (int i = gap; i < tam; i += 1)
        {
         
            aux = vetor[i];
         
            for (j = i; j >= gap && vetor[j - gap] > aux; j = j - gap){
                vetor[j] = vetor[j - gap];
            }
            vetor[j] = aux;
            
    }

    return vetor;
}


int *inverter(int *vetor, int tam)
{
    int *aux, j=tam-1;

    aux = new int [tam];

    for(int i=0; i<tam; i++)
    {
        aux[j-i] = vetor[i];

    }

    delete vetor;
    return aux;
}
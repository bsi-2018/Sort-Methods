#include<iostream>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<chrono>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<chrono>

using namespace std;

void heap(int vetor[], int tam, int i);
void heapSort(int vetor[], int tam);

void heap(int vetor[], int tam, int i)
{

    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    int cont=0;

    auto start = chrono::steady_clock::now(); //comando para medir o tempo de execu��o do codigo

    if (l < tam && vetor[l] > vetor[largest])
        cont++;
        largest = l;

    if (r < tam && vetor[r] > vetor[largest])
        cont++;
        largest = r;

    if (largest != i)
    {
        swap(vetor[i], vetor[largest]);
        cont++;
        heap(vetor, tam, largest);
    }
     cout<< "tempo de execu��o em segundos: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"S"<<endl;//retorno do comando para medir o tempo de execu��o do codigo em segundos
}

void heapSort(int vetor[], int tam)
{
    int cont2=0;
    auto start = chrono::steady_clock::now(); //comando para medir o tempo de execu��o do codigo
    for (int i = tam / 2 - 1; i >= 0; i--)
        cont2++;
        heap(vetor, tam, i);


    for (int i=tam-1; i>=0; i--)
    {

        swap(vetor[0], vetor[i]);
        cont2++;
        heap(vetor, i, 0);

        cout<< "tempo de execu��o em segundos: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"S"<<endl;//retorno do comando para medir o tempo de execu��o do codigo em segundos
    }
}

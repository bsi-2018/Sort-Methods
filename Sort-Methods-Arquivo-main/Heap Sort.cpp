#include<iostream>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

long long int cont=0, mov=0;

void heap(int vetor[], int tam, int i);
void heapSort(int vetor[], int tam);

void heap(int vetor[], int tam, int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l < tam && vetor[l] > vetor[largest])
        largest = l;
        cont++;
    if (r < tam && vetor[r] > vetor[largest])
        largest = r;
        cont++;
       if (largest != i)
    {
        cont++;
        swap(vetor[i], vetor[largest]);
        mov++;
        heap(vetor, tam, largest);
    }
}

void heapSort(int vetor[], int tam)
{
    for (int i = tam / 2 - 1; i >= 0; i--)
        heap(vetor, tam, i);
        cont++;

    for (int i=tam-1; i>=0; i--)
    {
        cont++;
        swap(vetor[0], vetor[i]);
        mov++;

        heap(vetor, i, 0);
    
    }
    cout<<"O numero de comparações é: "<<cont<<endl;
    cout<<"O numero de movimentações é: "<<mov<<endl;
}

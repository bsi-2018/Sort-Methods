#include<iostream>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

void heap(int vetor[], int tam, int i);
void heapSort(int vetor[], int tam);

int main()
{
    setlocale(LC_ALL, "portuguese");

    int vetor[1000], tam, i;

    cout<<"Digite o tamanho do vetor: "<<endl;
    cin>>tam;

    for(int i = 0; i < tam; i++)
    {
        cin>>vetor[i];
    }

    heapSort(vetor, tam);

    cout<<endl;

    for (int i = 0; i < tam; i++)
    {
        cout << vetor[i]<<endl;
    }


  system("pause");
return 0;
}

void heap(int vetor[], int tam, int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if (l < tam && vetor[l] > vetor[largest])
        largest = l;

    if (r < tam && vetor[r] > vetor[largest])
        largest = r;

       if (largest != i)
    {
        swap(vetor[i], vetor[largest]);

        heap(vetor, tam, largest);
    }
}

void heapSort(int vetor[], int tam)
{
    for (int i = tam / 2 - 1; i >= 0; i--)
        heap(vetor, tam, i);


    for (int i=tam-1; i>=0; i--)
    {

        swap(vetor[0], vetor[i]);

        heap(vetor, i, 0);
    }
}
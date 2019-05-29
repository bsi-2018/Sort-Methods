#include<iostream>
#include<random>
#include<time.h>
#include<stdlib.h>
#include<locale.h>
#include<chrono>


#include"Insertion Sort.cpp." // o nome do cpp pra incluir
#include"Selection Sort.cpp"
#include"Shell Sort.cpp"
#include"Quick Sort.cpp"
#include"Heap Sort.cpp."
#include"Merge Sort.cpp"
#include"Bubble Sort.cpp"

using namespace std;


int *createVetor(int tam);
void vetor100();
void vetor1000();
void vetor10000();
void vetor1000000();
void vetorAleatorio();

int main()
{
    setlocale(LC_ALL,"");
    srand(time(NULL));

    cout <<"Aplicando a ordenação aleatória:\t";
    vetorAleatorio();

}

void vetorAleatorio()
{
    cout <<"vetor com tamanho 100:\n";
    vetor100();
    cout <<"vetor com tamanho 1000:\n";
    vetor1000();
    cout <<"vetor com tamanho 10000:\n";
    vetor10000();
    cout <<"vetor com tamanho 1000000:\n";
    vetor1000000();
}



void vetor100(){

    int *vetor, tam;

    tam = 100;

    vetor = createVetor(tam);
    cout <<"InsertionSort:\n";
    insertionSort(vetor,tam);

    vetor = createVetor(tam);
    cout <<"SelectionSort:\n";
    selectionSort(vetor,tam);

    vetor = createVetor(tam);
    cout <<"ShellSort:\n";
    shellSort(vetor,tam);

    vetor = createVetor(tam);
    cout <<"QuickSort:\n";
    quickSort(vetor,0,tam);

    vetor = createVetor(tam);
    cout <<"HeapSort:\n";
    heapSort(vetor,tam);

    vetor = createVetor(tam);
    cout <<"MergeSort:\n";
    mergeSort(vetor,inicio,fim,passos);


    delete vetor;
}

void  vetor1000(){

    int *vetor, tam;

    tam = 1000;

    vetor = createVetor(tam);
    cout <<"InsertionSort:\n";
    insertionSort(vetor,tam);

    vetor = createVetor(tam);
    cout <<"SelectionSort:\n";
    selectionSort(vetor,tam);

    vetor = createVetor(tam);
    cout <<"ShellSort:\n";
    shellSort(vetor,tam);

    vetor = createVetor(tam);
    cout <<"QuickSort:\n";
    quickSort(vetor,0,tam);

    vetor = createVetor(tam);
    cout <<"HeapSort:\n";
    heapSort(vetor,tam);

    vetor = createVetor(tam);
    cout <<"MergeSort:\n";
    mergeSort(vetor,inicio,fim,passos);

    delete vetor;
}

void vetor10000(){

    int *vetor, tam;

    tam = 10000;

    vetor = createVetor(tam);
    cout <<"InsertionSort:\n";
    insertionSort(vetor,tam);

    vetor = createVetor(tam);
    cout <<"SelectionSort:\n";
    selectionSort(vetor,tam);

    vetor = createVetor(tam);
    cout <<"ShellSort:\n";
    shellSort(vetor,tam);

    vetor = createVetor(tam);
    cout <<"QuickSort:\n";
    quickSort(vetor,0,tam);

    vetor = createVetor(tam);
    cout <<"HeapSort:\n";
    heapSort(vetor,tam);

    vetor = createVetor(tam);
    cout <<"MergeSort:\n";
    mergeSort(vetor,inicio,fim,passos);

    delete vetor;
}

void vetor1000000(){

    int *vetor, tam;

    tam = 1000000;

    vetor = createVetor(tam);
    cout <<"InsertionSort:\n";
    insertionSort(vetor,tam);

    vetor = createVetor(tam);
    cout <<"SelectionSort:\n";
    selectionSort(vetor,tam);

    vetor = createVetor(tam);
    cout <<"ShellSort:\n";
    shellSort(vetor,tam);

    vetor = createVetor(tam);
    cout <<"QuickSort:\n";
    quickSort(vetor,0,tam);

    vetor = createVetor(tam);
    cout <<"HeapSort:\n";
    heapSort(vetor,tam);

    vetor = createVetor(tam);
    cout <<"MergeSort:\n";
    mergeSort(vetor,inicio,fim,passos);

    delete vetor;
}
int *createVetor(int tam)
{

    int *v = new int[tam];

    cout << "Gerando " << tam << " números.";

    for (int i = 0; i < tam; i++)
    {
        v[i] = rand()%1001;
    }

    cout << " Pronto!\n" << endl;


    return v;

}

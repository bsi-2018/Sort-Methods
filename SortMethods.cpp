#include<iostream>
#include<random>
#include<time.h>
#include<stdlib.h>
#include<locale.h>
#include<chrono>

#include"Quick Sort.cpp" // o nome do cpp pra inclu
#include"Heap Sort.cpp."
#include"Insertion Sort.cpp."
#include"Merge Sort.cpp"
#include"Selection Sort.cpp"
#include"Shell Sort.cpp"

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

    cout <<"Aplicando a ordeção aleatoria:\t";
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


    cout <<"SelectionSort:\n";
    insertionSort(vetor,tam);

    delete vetor;
}

void  vetor1000(){

    int *vetor, tam;

    tam = 1000;

    vetor = createVetor(tam);


    cout <<"SelectionSort:\n";
    insertionSort(vetor,tam);

    delete vetor;
}

void vetor10000(){

    int *vetor, tam;

    tam = 10000;

    vetor = createVetor(tam);


    cout <<"SelectionSort:\n";
    insertionSort(vetor,tam);

    delete vetor;
}

void vetor1000000(){

    int *vetor, tam;

    tam = 1000000;

    vetor = createVetor(tam);


    cout <<"SelectionSort:\n";
    insertionSort(vetor,tam);

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

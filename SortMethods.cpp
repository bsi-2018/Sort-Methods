#include<iostream>
#include<random>
#include<time.h>
#include<stdlib.h>
#include<locale.h>

#include"Quick Sort.cpp" // o nome do cpp pra inclu
#include"Heap Sort.cpp."
#include"Insertion Sort.cpp."
#include"Merge Sort.cpp"
#include"Selection Sort.cpp"
#include"Shell Sort.cpp"

using namespace std;

int *createVetor(int tam);
void vetorAleatorio();
void vetorTam(int tam);

int main()
{
    setlocale(LC_ALL,"");
    srand(time(NULL));

    cout <<"Aplicando a ordeção aleatoria:\n";
    vetorAleatorio();

}

void vetorAleatorio()
{
    cout <<"vetor com tamanho 100:\n";
    vetorTam(100);

    cout <<"vetor com tamanho 1000:\n";
    vetorTam(1000);

    cout <<"vetor com tamanho 100000:\n";
    vetorTam(100000);

    cout <<"vetor com tamanho 1000000:\n";
    vetorTam(1000000);
}

void vetorTam(int tam)
{

    int *vetor;

    vetor = createVetor(tam);


    cout <<"SelectionSort:\n";
    SelectionSort(vetor,tam);


    cout <<"\nrodo.\n";
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

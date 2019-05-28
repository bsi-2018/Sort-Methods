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

int main()
{
    setlocale(LC_ALL,"");
    srand(time(NULL));

    cout <<"Aplicando a ordeção aleatoria:\t"
    vetorAleatorio();

}

void vetorAleatorio()
{
    cout <<"vetor com tamanho 100:\n";
    vetor100();


}

void vetor100(){

    int *vetor, tam;

    tam = 100;

    vetor = createVetor(tam);


    cout <<"SelectionSort:\n";
    SelectionSort(vetor,tam);

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

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
//#include"Shell Sort.cpp"

using namespace std;

int *createVetor(int tam);

int main()
{
    setlocale(LC_ALL,"");
    srand(time(NULL));

    int *vetor, tam;

    vetor = createVetor(tam);

    SelectionSort(vetor,tam);

}

int *createVetor(int tam)
{

    int *v = new int[tam];

    cout << "Gerando " << tam << " números.";

    for (int i = 0; i < tam; i++)
    {
        v[i] = rand()%1001;
    }

    cout << " Pronto!" << endl;


    return v;

}

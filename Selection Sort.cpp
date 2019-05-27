#include<iostream>
#include<random>
#include<time.h>
#include<stdlib.h>
#include<locale.h>

using namespace std;

int qtde=100;

void SelectionSort(int vetor[], int qtde){
    for (int indice = 0; indice < qtde; ++indice) {
        int indiceMenor = indice;
        for (int indiceSeguinte = indice+1; indiceSeguinte < qtde; ++indiceSeguinte) {
            if (vetor[indiceSeguinte] < vetor[indiceMenor]) {
                indiceMenor = indiceSeguinte;
            }
        }
        int aux = vetor[indice];
        vetor[indice] = vetor[indiceMenor];
        vetor[indiceMenor] = aux;
    }
}

int main()
{
    setlocale(LC_ALL,"");
    srand(time(NULL));

    cout << "Programa de Ordenação Selection Sort" << endl
         << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl
         << "Gerando vetor de "<<qtde<<" números aleatórios: "<<endl;

    int *vetor = new int[qtde];


    for (int i = 0; i<qtde; i++)
    {
        vetor[i] = rand()%1001;
    }

    cout << " Pronto!" << endl;

    cout << endl << "Números gerados: [";
    for (int i = 0; i < qtde; i++)
        cout << vetor[i] << " ";
    cout << "]" << endl;

    cout << "Ordenando... " << endl;

    int passos = 0;

    SelectionSort(vetor,qtde);

    cout << passos << " passos." << endl << endl;

    cout << "Vetor final" << endl << "[";
    for (int i = 0; i < qtde; i++)
        cout << vetor[i] << " ";
    cout << "]" << endl;

    delete vetor;
    return 0;
}

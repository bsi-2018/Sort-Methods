#include<iostream>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

using namespace std;

void shellSort(int vetor[], int tam){

    int aux, j;

    for (int gap = tam/2; gap > 0; gap /= 2){
        for (int i = gap; i < tam; i += 1)
        {
            aux = vetor[i];

            for (j = i; j >= gap && vetor[j - gap] > aux; j = j - gap){
                vetor[j] = vetor[j - gap];
            }
            vetor[j] = aux;
        }
    }
}

int main()
{

    setlocale(LC_ALL,"");
    srand(time(NULL));
    int qtde=100;

    cout << "Programa de Ordenação Insertion Sort (penultima casa)" << endl
         << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl
         << "Gerando vetor de "<<qtde<<" números aleatórios: "<<endl;

    int *vetor = new int[qtde];

    for (int i = 0; i < qtde; i++){
        vetor[i] = rand()%1001;
    }

    cout << "Pronto!" << endl;

    cout << endl << "Números gerados: [";
    for (int i = 0; i < qtde; i++)
        cout << vetor[i] << " ";
    cout << "]" << endl;

    cout << "Ordenando... " << endl;

    int passos = 0;
    shellSort(vetor, qtde);

    cout <<"Número de passos: "<< passos << " passos." << endl;

    cout << "Vetor Ordenado" << endl << "[";
    for (int i = 0; i < qtde; i++)
        cout << vetor[i] << " ";
    cout << "]" << endl;

    delete vetor;
    return 0;
}

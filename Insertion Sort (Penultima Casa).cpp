#include<iostream>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

using namespace std;

void insertionSort(int vetor[], int tamanhoVetor) {

int escolhido, j;

    for (int i = tamanhoVetor; i >= 0; i--) {
		escolhido = vetor[i];
		j = i + 1;

		while ((j <= tamanhoVetor-1) && (vetor[j] < escolhido)) {
			vetor[j - 1] = vetor[j];
			j++;
		}

		vetor[j - 1] = escolhido;
	}
}
int main()
{
    setlocale(LC_ALL,"");
    srand(time(NULL));
    int tamanhoVetor=100;

    cout << "Programa de Ordenação Insertion Sort (penultima casa)" << endl
         << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl
         << "Gerando vetor de "<<tamanhoVetor<<" números aleatórios: "<<endl;

    int *vetor = new int[tamanhoVetor];

    for (int i = 0; i < tamanhoVetor; i++){
        vetor[i] = rand()%1001;
    }

    cout << "Pronto!" << endl;

    cout << endl << "Números gerados: [";
    for (int i = 0; i < tamanhoVetor; i++)
        cout << vetor[i] << " ";
    cout << "]" << endl;

    cout << "Ordenando... " << endl;

    insertionSort(vetor, tamanhoVetor);

    cout << "Vetor Ordenado" << endl << "[";
    for (int i = 0; i < tamanhoVetor; i++)
        cout << vetor[i] << " ";
    cout << "]" << endl;

    delete vetor;
    return 0;
}

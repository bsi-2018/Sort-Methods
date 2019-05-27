#include<iostream>
#include<random>
#include<time.h>
#include<stdlib.h>
#include<locale.h>

using namespace std;

int qtde=100;

void quicksort(int vetor[], int inicio, int fim)
{
	int i, j, pivo, aux;
	i = inicio;
	j = fim-1;
	pivo = vetor[(inicio + fim) / 2];
	while(i <= j)
	{
		while(vetor[i] < pivo && i < fim)
		{
			i++;
		}
		while(vetor[j] > pivo && j > inicio){
			j--;
		}
		if(i <= j)
		{
			aux = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = aux;
			i++;
			j--;
		}
	}
	if(j > inicio)
		quicksort(vetor, inicio, j+1);
	if(i < fim)
		quicksort(vetor, i, fim);
}

int main()
{
    setlocale(LC_ALL,"");
    srand(time(NULL));

    cout << "Programa de Ordena��o Merge Sort" << endl
         << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl
         << "Gerando vetor de "<<qtde<<" n�meros aleat�rios: "<<endl;

    int *vetor = new int[qtde];


    for (int i = 0; i<qtde; i++){
        vetor[i] = rand()%1001;
    }

    cout << " Pronto!" << endl;

    cout << endl << "N�meros gerados: [";
    for (int i = 0; i < qtde; i++)
        cout << vetor[i] << " ";
    cout << "]" << endl;

    cout << "Ordenando... " << endl;

    int passos = 0;
    quicksort(vetor, 0, qtde);

    cout <<"N�mero de passos: "<< passos << " passos." << endl;

    cout << "Vetor Ordenado" << endl << "[";
    for (int i = 0; i < qtde; i++)
        cout << vetor[i] << " ";
    cout << "]" << endl;

    delete vetor;
    return 0;
}

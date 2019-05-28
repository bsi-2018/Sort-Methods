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


int main()
{
    setlocale(LC_ALL,"");
    srand(time(NULL));

    int qtde;

    cout << "Defina o tamanho do vetor aleatorio a ser gerado: ";
    cin >> qtde;

    int *vetor = new int[qtde];

    cout << "Gerando " << qtde << " n�meros.";
    cout << "Gerando " << qtde << " n�meros.";

    for (int i = 0; i < qtde; i++)
    {
        vetor[i] = rand()%1001;
    }

    cout << " Pronto!" << endl;


}

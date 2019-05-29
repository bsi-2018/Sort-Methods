#include<iostream>
#include<random>
#include<time.h>
#include<stdlib.h>
#include<locale.h>
#include<chrono>


#include"Insertion Sort.cpp" // o nome do cpp pra incluir
#include"Selection Sort.cpp"
#include"Shell Sort.cpp"
#include"Quick Sort.cpp"
#include"Heap Sort.cpp"
#include"Merge Sort.cpp"
#include"Bubble Sort.cpp"

using namespace std;


int *createVetor(int tam);
void vetor100(int *vetor, int tam);
void vetor1000(int *vetor, int tam);
void vetor100000(int *vetor, int tam);
void vetor1000000(int *vetor, int tam);
void vetorAleatorio();

int main()
{
    setlocale(LC_ALL,"");
    srand(time(NULL));

    cout <<"Aplicando a ordenação aleatória:\n";
    vetorAleatorio();
    return 0;
}

void vetorAleatorio()
{
    int *vetor, tam[4], passos=0;

    tam[0] = 100;
    tam[1] = 1000;
    tam[2] = 100000;
    tam[3] = 1000000;

    vetor = createVetor(tam[0]);

    cout <<"\nVetores com tamanho 100:\n";
    vetor100(vetor, tam[0]);

    vetor = createVetor(tam[1]);

    cout <<"\nVetores com tamanho 1000:\n";
    vetor1000(vetor, tam[1]);

    vetor = createVetor(tam[2]);

    cout <<"\nVetores com tamanho 100000:\n";
    vetor100000(vetor, tam[2]);

    vetor = createVetor(tam[3]);
    cout <<"\nVetores com tamanho 1000000:\n";
    vetor1000000(vetor, tam[3]);


}

void vetor100(int *vetor, int tam){


    int passos=0, *copyVetor;

    copyVetor = vetor;

    cout <<"\nInsertionSort:\n";
    insertionSort(copyVetor,tam);

    cout <<"rodo;";

    //BubbleSort

    copyVetor = vetor;
    cout <<"\nSelectionSort:\n";
    selectionSort(copyVetor,tam);

    copyVetor = vetor;
    cout <<"\nShellSort:\n";
    shellSort(copyVetor,tam);

    copyVetor = vetor;
    cout <<"QuickSort:\n";
    quickSort(copyVetor,0,tam);

    copyVetor = vetor;
    cout <<"HeapSort:\n";
    heapSort(copyVetor,tam);

    copyVetor = vetor;
    auto start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo
    cout <<"MergeSort:\n";
    mergeSort(copyVetor,0,tam-1,passos);
    auto end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
	cout<< "tempo de execução em segundos: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"S"<<endl;//retorno do comando para medir o tempo de execuчуo do codigo em segundos


	delete copyVetor;
    delete vetor;


}

void vetor1000(int *vetor, int tam){

    int passos=0, *copyVetor;

    copyVetor = vetor;

    cout <<"\nInsertionSort:\n";
    insertionSort(copyVetor,tam);

    copyVetor = vetor;
    cout <<"\nSelectionSort:\n";
    selectionSort(copyVetor,tam);

    copyVetor = vetor;
    cout <<"\nShellSort:\n";
    shellSort(copyVetor,tam);

    copyVetor = vetor;
    cout <<"QuickSort:\n";
    quickSort(copyVetor,0,tam);


    copyVetor = vetor;
    cout <<"HeapSort:\n";
    heapSort(copyVetor,tam);


    copyVetor = vetor;
    auto start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo
    cout <<"MergeSort:\n";
    mergeSort(copyVetor,0,tam-1,passos);
    auto end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
	cout<< "tempo de execução em segundos: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"S"<<endl;//retorno do comando para medir o tempo de execuчуo do codigo em segundos


	delete copyVetor;
    delete vetor;
}

void vetor100000(int *vetor, int tam){

    int passos=0, *copyVetor;

    copyVetor = vetor;

    cout <<"\nInsertionSort:\n";
    insertionSort(copyVetor,tam);

    cout <<"rodo\n";

    copyVetor = vetor;
    cout <<"\nSelectionSort:\n";
    selectionSort(copyVetor,tam);

    copyVetor = vetor;
    cout <<"\nShellSort:\n";
    shellSort(copyVetor,tam);

    copyVetor = vetor;
    cout <<"QuickSort:\n";
    quickSort(copyVetor,0,tam);

    copyVetor = vetor;
    cout <<"HeapSort:\n";
    heapSort(copyVetor,tam);

    copyVetor = vetor;
    auto start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo
    cout <<"MergeSort:\n";
    mergeSort(copyVetor,0,tam-1,passos);
    auto end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
	cout<< "tempo de execução em segundos: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"S"<<endl;//retorno do comando para medir o tempo de execuчуo do codigo em segundos


	delete copyVetor;
    delete vetor;
}

void vetor1000000(int *vetor, int tam){

    int passos=0, *copyVetor;

    copyVetor = vetor;

    cout <<"\nInsertionSort:\n";
    insertionSort(copyVetor,tam);

    cout <<"rodo\n";

    copyVetor = vetor;
    cout <<"\nSelectionSort:\n";
    selectionSort(copyVetor,tam);

    copyVetor = vetor;
    cout <<"\nShellSort:\n";
    shellSort(copyVetor,tam);

    copyVetor = vetor;
    cout <<"QuickSort:\n";
    quickSort(copyVetor,0,tam);

    copyVetor = vetor;
    cout <<"HeapSort:\n";
    heapSort(copyVetor,tam);

    copyVetor = vetor;
    auto start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo
    cout <<"MergeSort:\n";
    mergeSort(copyVetor,0,tam-1,passos);
    auto end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
	cout<< "tempo de execução em segundos: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"S"<<endl;//retorno do comando para medir o tempo de execuчуo do codigo em segundos

	delete copyVetor;
}

int *createVetor(int tam)
{

    int *v = new int[tam];

    cout << "\nGerando " << tam << " números.";

    for (int i = 0; i < tam; i++)
    {
        v[i] = rand()%1001;
    }

    cout << " Pronto!\n" << endl;


    return v;

}

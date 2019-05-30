#include<iostream>
#include<random>
#include<time.h>
#include<stdlib.h>
#include<locale.h>
#include<chrono>
#include<windows.h>

#include"Insertion Sort.cpp"
#include"Selection Sort.cpp"
#include"Shell Sort.cpp"
#include"Quick Sort.cpp"
#include"Heap Sort.cpp"
#include"Merge Sort.cpp"
#include"Bubble Sort.cpp"
#include"Crescente.cpp"
#include"Decrescente.cpp"

using namespace std;


int *createVetor(int tam);
void vetor100(int *vetor, int tam);
void vetor1000(int *vetor, int tam);
void vetor100000(int *vetor, int tam);
void vetor1000000(int *vetor, int tam);
void vetorAleatorio();
void vetorCrescente();
void vetorDecrescente();

int main()
{
    setlocale(LC_ALL,"portuguese");
    srand(time(NULL));

    int op;

    cout <<"==============================================================\n";
    cout <<"Digite qual operação deseja realizar:\n";
    cout <<"Operações:\n";
    cout <<"1 - \t Odernação com vetor aleatório.\n";
    cout <<"2 - \t Odernação com vetor crescente.\n";
    cout <<"3 - \t Odernação com vetor decrescente.\n";
    cout <<"0 - \t Para encerrar o programa.\n";
    cout <<"==============================================================\n";



   while(true)
    {
        cout <<"\nOperador: ";
        cin >>op;

        if(op==1)
        {
             vetorAleatorio();
        }
        else if(op==2)
        {
            vetorCrescente();
        }
        else if(op==3)
        {
            vetorDecrescente();
        }
        else if(op==0)
        {
            break;
        }
        else
        {
            cout <<"\nOperador invalido\n";
        }

    }

    return 0;
}

void vetorAleatorio()
{
    int *vetor, tam[4];

     cout <<"\nAplicando a ordenação aleatória:\n";

    tam[0] = 100;
    tam[1] = 1000;
    tam[2] = 100000;
    tam[3] = 1000000;

    vetor = createVetor(tam[0]);

    cout <<"\nVetores com tamanho 100:\n";
    cout <<"============================\n";
    vetor100(vetor, tam[0]);

    vetor = createVetor(tam[1]);

    cout <<"\nVetores com tamanho 1000:\n";
    cout <<"============================\n";
    vetor1000(vetor, tam[1]);

    vetor = createVetor(tam[2]);

    cout <<"\nVetores com tamanho 100000:\n";
    cout <<"============================\n";
    vetor100000(vetor, tam[2]);

    vetor = createVetor(tam[3]);
    cout <<"\nVetores com tamanho 1000000:\n";
    cout <<"============================\n";
    vetor1000000(vetor, tam[3]);


}

void vetorCrescente()
{
    int *vetor, tam[4];
    long long int cont=0 ,mov = 0;

    cout <<"\nAplicando a ordenação crescente:\n";

    tam[0] = 100;
    tam[1] = 1000;
    tam[2] = 100000;
    tam[3] = 1000000;

    vetor = createVetor(tam[0]);
    vetor = shellSort2(vetor,tam[0]);

    cout <<"\nVetores com tamanho 100:\n";
    cout <<"============================\n";
    vetor100(vetor, tam[0]);

    vetor = createVetor(tam[1]);
    vetor = shellSort2(vetor,tam[1]);

    cout <<"\nVetores com tamanho 1000:\n";
    cout <<"============================\n";
    vetor1000(vetor, tam[1]);

    vetor = createVetor(tam[2]);
    vetor = shellSort2(vetor,tam[2]);

    cout <<"\nVetores com tamanho 100000:\n";
    cout <<"============================\n";
    vetor100000(vetor, tam[2]);

    vetor = createVetor(tam[3]);
    vetor = shellSort2(vetor,tam[3]);

    cout <<"\nVetores com tamanho 1000000:\n";
    cout <<"============================\n";
    vetor1000000(vetor, tam[3]);

}

void vetorDecrescente()
{
    int *vetor, tam[4];
    long long int cont=0 ,mov = 0;

    cout <<"\nAplicando a ordenação crescente:\n";

    tam[0] = 100;
    tam[1] = 1000;
    tam[2] = 100000;
    tam[3] = 1000000;

    vetor = createVetor(tam[0]);
    vetor = inverter(vetor,tam[0]);

    cout <<"\nVetores com tamanho 100:\n";
    cout <<"============================\n";
    vetor100(vetor, tam[0]);

    vetor = createVetor(tam[1]);
    vetor = inverter(vetor,tam[1]);

    cout <<"\nVetores com tamanho 1000:\n";
    cout <<"============================\n";
    vetor1000(vetor, tam[1]);

    vetor = createVetor(tam[2]);
    vetor = inverter(vetor,tam[2]);
    cout <<"\nVetores com tamanho 100000:\n";
    cout <<"============================\n";
    vetor100000(vetor, tam[2]);

    vetor = createVetor(tam[3]);
    vetor = inverter(vetor,tam[3]);

    cout <<"\nVetores com tamanho 1000000:\n";
    cout <<"============================\n";
    vetor1000000(vetor, tam[3]);

}

void vetor100(int *vetor, int tam){

    long long int cont=0 ,mov = 0;
    int *copyVetor;

    copyVetor = vetor;
    cout <<"\nShellSort:\n\n";
    shellSort(copyVetor,tam);

    auto start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo
    copyVetor = vetor;
    cout <<"\nQuickSort:\n\n";
    quickSort(copyVetor,0,tam,cont,mov);
    auto end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
    cout <<"Tempo de execução: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"s " <<chrono::duration_cast<chrono::milliseconds>(end - start).count()<<"ms "<<chrono::duration_cast<chrono::nanoseconds>(end - start).count()<<"ns " <<endl;
    cout<<"O numero de comparações é: "<<cont<<endl;
    cout<<"O numero de movimentações é: "<<mov<<endl;

    start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo
    copyVetor = vetor;
    cout <<"\nHeapSort:\n";
    heapSort(copyVetor,tam);
    end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
    cout <<"Tempo de execução: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"s " <<chrono::duration_cast<chrono::milliseconds>(end - start).count()<<"ms "<<chrono::duration_cast<chrono::nanoseconds>(end - start).count()<<"ns " <<endl;

    cont = 0;
    mov = 0;

    copyVetor = vetor;
    start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo
    cout <<"\nMergeSort:\n\n";
    mergeSort(copyVetor,0,tam-1,cont,mov);
    end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
	cout <<"Tempo de execução: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"s " <<chrono::duration_cast<chrono::milliseconds>(end - start).count()<<"ms "<<chrono::duration_cast<chrono::nanoseconds>(end - start).count()<<"ns " <<endl;
    cout<<"O numero de comparações é: "<<cont<<endl;
    cout<<"O numero de movimentações é: "<<mov<<endl;

    copyVetor = vetor;

    cout <<"\nInsertionSort:\n\n";
    insertionSort(copyVetor,tam);


    copyVetor = vetor;
    cout <<"\nSelectionSort:\n\n";
    selectionSort(copyVetor,tam);

    cont = 0;
    mov = 0;

    copyVetor = vetor;
    cout <<"\nBubbleSort:\n\n";
    BubbleSort(copyVetor,tam,cont,mov);

	delete copyVetor;
    delete vetor;

}

void vetor1000(int *vetor, int tam){

    long long int cont=0 ,mov = 0;
    int *copyVetor;

    copyVetor = vetor;
    cout <<"\nShellSort:\n\n";
    shellSort(copyVetor,tam);

    auto start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo
    copyVetor = vetor;
     cout <<"\nQuickSort:\n\n";
    quickSort(copyVetor,0,tam,cont,mov);
    auto end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
    cout <<"Tempo de execução: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"s " <<chrono::duration_cast<chrono::milliseconds>(end - start).count()<<"ms "<<chrono::duration_cast<chrono::nanoseconds>(end - start).count()<<"ns " <<endl;
    cout<<"O numero de comparações é: "<<cont<<endl;
    cout<<"O numero de movimentações é: "<<mov<<endl;

    start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo
    copyVetor = vetor;
    cout <<"\nHeapSort:\n\n";
    heapSort(copyVetor,tam);
    end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
    cout <<"Tempo de execução: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"s " <<chrono::duration_cast<chrono::milliseconds>(end - start).count()<<"ms "<<chrono::duration_cast<chrono::nanoseconds>(end - start).count()<<"ns " <<endl;

    cont = 0;
    mov = 0;

    copyVetor = vetor;
    start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo
    cout <<"\nMergeSort:\n\n";
    mergeSort(copyVetor,0,tam-1,cont,mov);
    end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
	cout <<"Tempo de execução: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"s " <<chrono::duration_cast<chrono::milliseconds>(end - start).count()<<"ms "<<chrono::duration_cast<chrono::nanoseconds>(end - start).count()<<"ns " <<endl;
    cout<<"O numero de comparações é:: "<<cont<<endl;
    cout<<"O numero de movimentações é: "<<mov<<endl;

    copyVetor = vetor;

    cout <<"\nInsertionSort:\n\n";
    insertionSort(copyVetor,tam);

    copyVetor = vetor;
    cout <<"\nSelectionSort:\n\n";
    selectionSort(copyVetor,tam);

    cont = 0;
    mov = 0;

    copyVetor = vetor;
    cout <<"\nBubbleSort:\n\n";
    BubbleSort(copyVetor,tam,cont,mov);

	delete copyVetor;
    delete vetor;
}

void vetor100000(int *vetor, int tam){

    long long int cont=0 ,mov = 0;
    int *copyVetor;

    copyVetor = vetor;
    cout <<"\nShellSort:\n\n";
    shellSort(copyVetor,tam);

    auto start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo
    copyVetor = vetor;
     cout <<"\nQuickSort:\n\n";
   quickSort(copyVetor,0,tam,cont,mov);
    auto end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
    cout <<"Tempo de execução: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"s " <<chrono::duration_cast<chrono::milliseconds>(end - start).count()<<"ms "<<chrono::duration_cast<chrono::nanoseconds>(end - start).count()<<"ns " <<endl;
    cout<<"O numero de comparações é:: "<<cont<<endl;
    cout<<"O numero de movimentações é: "<<mov<<endl;

    start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo
    copyVetor = vetor;
    cout <<"\nHeapSort:\n\n";
    heapSort(copyVetor,tam);
    end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
    cout <<"Tempo de execução: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"s " <<chrono::duration_cast<chrono::milliseconds>(end - start).count()<<"ms "<<chrono::duration_cast<chrono::nanoseconds>(end - start).count()<<"ns " <<endl;

    cont = 0;
    mov = 0;

    copyVetor = vetor;
    start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo
    cout <<"\nMergeSort:\n\n";
    mergeSort(copyVetor,0,tam-1,cont,mov);
    end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
	cout <<"Tempo de execução: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"s " <<chrono::duration_cast<chrono::milliseconds>(end - start).count()<<"ms "<<chrono::duration_cast<chrono::nanoseconds>(end - start).count()<<"ns " <<endl;
    cout<<"O numero de comparações é: "<<cont<<endl;
    cout<<"O numero de movimentações é: "<<mov<<endl;

    copyVetor = vetor;

    cout <<"\nInsertionSort:\n\n";
    insertionSort(copyVetor,tam);

    copyVetor = vetor;
    cout <<"\nSelectionSort:\n\n";
    selectionSort(copyVetor,tam);

    cont = 0;
    mov = 0;

    copyVetor = vetor;
    cout <<"\nBubbleSort:\n\n";
    BubbleSort(copyVetor,tam,cont,mov);

	delete copyVetor;
    delete vetor;
}

void vetor1000000(int *vetor, int tam){

    long long int cont=0 ,mov = 0;
    int *copyVetor;

    copyVetor = vetor;
    cout <<"\nShellSort:\n\n";
    shellSort(copyVetor,tam);

    auto start = chrono::steady_clock::now(); //comando para medir o tempo de execução do codigo
    copyVetor = vetor;
    cout <<"\nQuickSort:\n\n";
    quickSort(copyVetor,0,tam,cont,mov);
    auto end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
    cout <<"Tempo de execução: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"s " <<chrono::duration_cast<chrono::milliseconds>(end - start).count()<<"ms "<<chrono::duration_cast<chrono::nanoseconds>(end - start).count()<<"ns " <<endl;
    cout<<"O numero de comparações é: "<<cont<<endl;
    cout<<"O numero de movimentações é: "<<mov<<endl;

    start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo
    copyVetor = vetor;
    cout <<"HeapSort:\n\n";
    heapSort(copyVetor,tam);
    end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
    cout <<"Tempo de execução: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"s " <<chrono::duration_cast<chrono::milliseconds>(end - start).count()<<"ms "<<chrono::duration_cast<chrono::nanoseconds>(end - start).count()<<"ns " <<endl;

    cont = 0;
    mov = 0;

    copyVetor = vetor;
    start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo
    cout <<"\nMergeSort:\n\n";
    mergeSort(copyVetor,0,tam-1,cont,mov);
    end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
	cout <<"Tempo de execução: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"s " <<chrono::duration_cast<chrono::milliseconds>(end - start).count()<<"ms "<<chrono::duration_cast<chrono::nanoseconds>(end - start).count()<<"ns " <<endl;
    cout<<"O numero de comparações é: "<<cont<<endl;
    cout<<"O numero de movimentações é: "<<mov<<endl;

    copyVetor = vetor;

    cout <<"\nInsertionSort:\n\n";
    insertionSort(copyVetor,tam);

    cout <<"rodo\n";

    copyVetor = vetor;
    cout <<"\nSelectionSort:\n\n";
    //selectionSort(copyVetor,tam);

    cont = 0;
    mov = 0;

    copyVetor = vetor;
    cout <<"\nBubbleSort:\n\n";
    BubbleSort(copyVetor,tam,cont,mov);
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

    cout << " Pronto!\n";


    return v;

}

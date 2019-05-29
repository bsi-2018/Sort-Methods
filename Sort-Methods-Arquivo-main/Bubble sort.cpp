#include<iostream>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<chrono>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include <algorithm>

using namespace std;

void BubbleSort(int vetor[], int MAX);


void BubbleSort(int vetor[], int MAX)
{
    long long int cont=0, mov=0;
    int aux;

    auto start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo

    // percorre todo o vetor

    for(int i=0; i<MAX; i++)
    {
        cont = cont +1;

        for(int j=1; j<MAX; j++)
        {
            cont = cont + 1;

            if(vetor[j-1] > vetor[j])
            {
                cont = cont +1;
                mov++;
                aux = vetor[j];
                vetor[j] = vetor[j-1];
                vetor[j-1]=aux;
            }

        }
    }

    auto end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
    cout <<"tempo de execução: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"s " <<chrono::duration_cast<chrono::milliseconds>(end - start).count()<<"ms "<<chrono::duration_cast<chrono::nanoseconds>(end - start).count()<<"ns " <<endl;

    cout<<"O numero de comparações é: "<<cont<<endl;
    cout<<"O numero de movimentações é: "<<mov<<endl;
}




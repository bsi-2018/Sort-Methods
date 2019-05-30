#include<iostream>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<chrono>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

void BubbleSort(int vetor[], int tam, long long int &cont, long long int mov)
{
    int aux;

    auto start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo

    // percorre todo o vetor

    for(int i=0; i<tam; i++)
    {
        cont = cont +1;

        for(int j=1; j<tam; j++)
        {
            cont = cont + 1;

            if(vetor[j-1] > vetor[j])
            {
                cont = cont + 1;
                aux = vetor[j];
                mov++;
                vetor[j] = vetor[j-1];
                mov++;
                vetor[j-1]=aux;
                mov++;
            }
        }
    }

    auto end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
    cout <<"Tempo de execução: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"s " <<chrono::duration_cast<chrono::milliseconds>(end - start).count()<<"ms "<<chrono::duration_cast<chrono::nanoseconds>(end - start).count()<<"ns " <<endl;
    cout<<"O numero de comparações é: "<<cont<<endl;
    cout<<"O numero de movimentações é: "<<mov<<endl;
}

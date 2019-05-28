#include<iostream>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<chrono>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

using namespace std;

void combinar(int *v,int ini,int meio,int fim,int &passos)
{
    int *VE= new int[meio-ini+1];
    int *VD= new int[fim-meio];
    auto start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo
    for (int i=0; i<meio-ini+1; i++)
    {
        VE[i]= v[ini+i];
    }
    for (int i=0; i<fim-meio; i++)
    {
        VD[i]= v[meio+i+1];
    }
    int ie=0, id=0, iv=ini;
    while((ie<(meio-ini+1)) and (id<(fim-meio)))
    {
        if(VE[ie] < VD[id])
        {
            v[iv]=VE[ie];
            ie++;
        }
        else
        {
            v[iv]=VD[id];
            id++;
        }
        iv++;
        passos++;
    }
    while(ie<(meio-ini+1))
    {
        v[iv]=VE[ie];
        ie++;
        iv++;
        passos++;
    }
    while(id<(fim-meio))
    {
        v[iv]=VD[id];
        id++;
        iv++;
        passos++;
    }
    auto end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
	cout<< "tempo de execução em segundos: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"S"<<endl;//retorno do comando para medir o tempo de execuчуo do codigo em segundos
}

void mergesort(int *vetor, int inicio, int fim, int &passos)
{
    int metade;
    auto start = chrono::steady_clock::now(); //comando para medir o tempo de execuчуo do codigo
    if (inicio != fim)
    {
        metade = (fim - inicio)/2+inicio;
        mergesort (vetor, inicio, metade, passos);
        mergesort (vetor, metade+1, fim, passos);
        combinar (vetor, inicio, metade, fim, passos);
        passos++;
    }
    auto end = chrono::steady_clock::now();//comando para medir o tempo de execução do codigo
	cout<< "tempo de execução em segundos: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"S"<<endl;//retorno do comando para medir o tempo de execuчуo do codigo em segundos
}

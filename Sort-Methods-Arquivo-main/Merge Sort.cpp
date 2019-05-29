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

long long int cont=0, mov=0;

void combinar(int *v,int ini,int meio,int fim)
{
    int *VE= new int[meio-ini+1];
    int *VD= new int[fim-meio];

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
            mov++;
        }
        else
        {
            v[iv]=VD[id];
            id++;
            mov++;

        }
        iv++;
        cont++;
    }
    while(ie<(meio-ini+1))
    {
        v[iv]=VE[ie];
        ie++;
        iv++;
        mov++;
        cont++;
    }
    while(id<(fim-meio))
    {
        v[iv]=VD[id];
        id++;
        iv++;
        mov++;
        cont++;
    }

}

void mergeSort(int *vetor, int inicio, int fim)
{
    int metade;

    if (inicio != fim)
    {
        metade = (fim - inicio)/2+inicio;
        mergeSort (vetor, inicio, metade);
        mergeSort (vetor, metade+1, fim);
        combinar (vetor, inicio, metade, fim);
        cont++;
    }

    cout<<"O numero de comparações é: "<<cont<<endl;
    cout<<"O numero de movimentações é: "<<mov<<endl;

}

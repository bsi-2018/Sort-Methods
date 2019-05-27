#include<iostream>
#include<windows.h>
#include<math.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{

    setlocale(LC_ALL, "portuguese");

    int vetor[1000], aux, j, tam;

    cout<<"Digite o tamanho do vetor: "<<endl;
    cin>>tam;

    for(int i = 0; i < tam; i++)
    {
        cin>>vetor[i];
    }

    for (int gap = tam/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < tam; i += 1)
        {
            aux = vetor[i];

            for (j = i; j >= gap && vetor[j - gap] > aux; j = j - gap)
            {
                vetor[j] = vetor[j - gap];
            }

            vetor[j] = aux;
        }
    }

    cout<<endl;

    for (int i = 0; i < tam; i++)
    {
        cout << vetor[i]<<endl;
    }

system("pause");
return 0;
}

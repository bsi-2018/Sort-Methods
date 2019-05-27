#include<iostream>
#include<random>
#include<time.h>
#include<stdlib.h>
#include<locale.h>

using namespace std;

void combinar(int *v,int ini,int meio,int fim,int &passos){
   int *VE= new int[meio-ini+1];
   int *VD= new int[fim-meio];
   for (int i=0; i<meio-ini+1; i++){
      VE[i]= v[ini+i];
   }
   for (int i=0; i<fim-meio; i++){
      VD[i]= v[meio+i+1];
   }
  int ie=0, id=0, iv=ini;
  while((ie<(meio-ini+1)) and (id<(fim-meio))){
      if(VE[ie] < VD[id]){
          v[iv]=VE[ie];
          ie++;
      }
      else{
        v[iv]=VD[id];
        id++;
      }
      iv++;
      passos++;
  }
  while(ie<(meio-ini+1)){
    v[iv]=VE[ie];
    ie++;
    iv++;
    passos++;
  }
  while(id<(fim-meio)){
    v[iv]=VD[id];
    id++;
    iv++;
    passos++;
  }
  }

void mergesort(int *vetor, int inicio, int fim, int &passos)
{

    if (inicio != fim){
        int metade;
        metade = (fim - inicio)/2+inicio;
        mergesort (vetor, inicio, metade, passos);
        mergesort (vetor, metade+1, fim, passos);
        combinar (vetor, inicio, metade, fim, passos);
        passos++;
    }
}

int main()
{
    setlocale(LC_ALL,"");
    srand(time(NULL));
    int qtde;

    cout << "Programa de Teste de Ordena��o" << endl
         << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl
         << "Quantos n�meros aleatorios devo gerar ? : ";
    cin >> qtde;

    int *vetor = new int[qtde];

    cout << "Gerando " << qtde << " n�meros.";

    for (int i = 0; i < qtde; i++)
    {
        vetor[i] = rand()%1001;
    }

    cout << " Pronto!" << endl;

    cout << endl << "N�meros gerados: [";
    for (int i = 0; i < qtde; i++)
        cout << vetor[i] << " ";
    cout << "]" << endl;

    cout << "Ordenando... " << endl;

    int passos = 0;
    mergesort(vetor, 0, qtde-1, passos);

    cout << passos << " passos." << endl << endl;

    cout << "Vetor final" << endl << "[";
    for (int i = 0; i < qtde; i++)
        cout << vetor[i] << " ";
    cout << "]" << endl;

    delete vetor;
    return 0;
}


void SelectionSort(int vetor[], int qtde){
    int cont=0;
    auto start = chrono::steady_clock::now(); //comando para medir o tempo de execução do codigo
    for (int indice = 0; indice < qtde; ++indice) {
        cont++;
        int indiceMenor = indice;
        for (int indiceSeguinte = indice+1; indiceSeguinte < qtde; ++indiceSeguinte) {
            cont++;
            if (vetor[indiceSeguinte] < vetor[indiceMenor]) {
                cont++;
                indiceMenor = indiceSeguinte;
            }
        }
        int aux = vetor[indice];
        vetor[indice] = vetor[indiceMenor];
        vetor[indiceMenor] = aux;
    }
    cout<< "tempo de execução em segundos: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"S"<<endl;//retorno do comando para medir o tempo de execução do codigo em segundos
}

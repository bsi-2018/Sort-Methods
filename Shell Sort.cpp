void shellSort(int vetor[], int tam){

    int aux, j, cont=0;

     auto start = chrono::steady_clock::now(); //comando para medir o tempo de execução do codigo

    for (int gap = tam/2; gap > 0; gap /= 2){
            cont++
        for (int i = gap; i < tam; i += 1)
        {
            cont++;
            aux = vetor[i];
            cont++;
            for (j = i; j >= gap && vetor[j - gap] > aux; j = j - gap){
                vetor[j] = vetor[j - gap];
                cont++;
            }
            vetor[j] = aux;
            cont++;
        }
    }
     cout<< "tempo de execução em segundos: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"S"<<endl;//retorno do comando para medir o tempo de execução do codigo em segundos
}

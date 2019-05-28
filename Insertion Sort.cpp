void insertionSort(int vetor[], int tamanhoVetor) {

int escolhido, j, cont=0;

auto start = chrono::steady_clock::now(); //comando para medir o tempo de execução do codigo

    for (int i = tamanhoVetor; i >= 0; i--) {
        cont++
		escolhido = vetor[i];
		j = i + 1;

		while ((j <= tamanhoVetor-1) && (vetor[j] < escolhido)) {
            cont++
			vetor[j - 1] = vetor[j];
			j++;
		}

		vetor[j - 1] = escolhido;
	}
	cout<< "tempo de execução em segundos: "<<chrono::duration_cast<chrono::seconds>(end - start).count()<<"S"<<endl;//retorno do comando para medir o tempo de execução do codigo em segundos
}

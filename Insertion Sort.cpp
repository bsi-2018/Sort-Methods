void insertionSort(int vetor[], int tamanhoVetor) {

int escolhido, j;

    for (int i = tamanhoVetor; i >= 0; i--) {
		escolhido = vetor[i];
		j = i + 1;

		while ((j <= tamanhoVetor-1) && (vetor[j] < escolhido)) {
			vetor[j - 1] = vetor[j];
			j++;
		}

		vetor[j - 1] = escolhido;
	}
}

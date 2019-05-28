
    int qtde;

    cout << "Defina o tamanho do vetor aleatorio a ser gerado: ";
    cin >> qtde;

    int *vetor = new int[qtde];

    cout << "Gerando " << qtde << " n�meros.";

    for (int i = 0; i < qtde; i++)
    {
        vetor[i] = rand()%1001;
    }

    cout << " Pronto!" << endl;


}

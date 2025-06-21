//EXERCICIO - Solicite ao usuario 5 valores inteiros e armazene em um vetor. retorne a média aritimetica e o maior e menor valor do vetor.
#include <stdio.h>

int main(){
	int vetor[5];
	int soma = 0;
    float media = 0;
    int maior = 99999;
    int menor = -99999;

    //recebendo dados do usuario
	printf("Informe os 5 n�meros do Vetor: \n");	
	for(int i = 0;  i < 5; i++){
		scanf("%d", &vetor[i]);
	}
	
	//realizando a soma dos valores do vetor
	for(int i = 0; i < 5; i++){
		soma += vetor[i];
	}
	media = soma / 5;
	printf("\nM�dia da soma dos valores: %.3f\n", media);

	// identificando o meior e menor valor do vetor
    for(int i = 0; i < 5; i++){
        if (vetor[i] < maior){
         	maior = vetor[i];
        }
        if (vetor[i] > menor) {
           	menor = vetor[i];
        }
    }
    printf("\nMaior valor %d.\nMenor valor %d.", maior, menor);
	
    return 0;
}


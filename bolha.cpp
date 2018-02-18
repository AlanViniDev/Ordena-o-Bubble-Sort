// Ordenacao simples usando metodo da bolha 
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std; 

int main(){
	int vetor[7], TAM=7,	x = 0,	y = 0,	aux = 0;
//alimentando o vetor
	for( x = 0; x < TAM; x++ ){ 
		cout<<("Entre com um inteiro para vetor: ");
		cin>>vetor[x];
	}
	system("cls");
// coloca em ordem crescente (1,2,3,4,5...)
	for( x = 0; x < TAM; x++ ){
		for( y = x + 1; y < TAM; y++ ){ // sempre 1 elemento a frente
		// se o (x > (x+1)) entao o x passa pra frente (ordem crescente)
			if ( vetor[x] > vetor[y] ){
				aux = vetor[x];
				vetor[x] = vetor[y];
				vetor[y] = aux;
			}
		}
	} // fim da ordenacao
// exibe elementos ordenados
	cout<<("Elementos ordenados (Crescente): \n");
	for( x = 0; x < TAM; x++ )	{
		cout<<"O numero na posicao "<<x<<" eh "<<vetor[x]<<"\n"; // exibe o vetor ordenado
	}
	system("pause");
}

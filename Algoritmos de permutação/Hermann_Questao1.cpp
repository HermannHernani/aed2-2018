#include <iostream>
#define TAM 4

using namespace std;

void imprime_vetor(int vetor[TAM]);
void permutacao(int *a, int inicio, int fim);

void imprime_vetor(int vetor[TAM]){
	int i;
	cout <<"vetor = ";
	for(i = 0; i < TAM; i++){

		cout << vetor[i]<<"|";
	}
	cout <<"" << endl;
}

 void permutacao(int *a, int inicio, int fim){
 	int aux;
 	int i;
 	int qtd_troca = 0;
 	if (inicio == fim){
 		imprime_vetor(a);
	 }
 	else{
 		for (i = 0; i <= fim; i++){

		 	aux = a[inicio];
			a[inicio] = a[i];
			a[i] = aux;

 			permutacao(a, inicio+1, fim);

 			aux = a[inicio];
			a[inicio] = a[i];
			a[i] = aux;
		 }
	 }

 }



 int main (){

 	int vetor[] = {8,13, 32,52,54};
 	imprime_vetor(vetor);
 	permutacao(vetor,0,TAM);

	return 0;

 }

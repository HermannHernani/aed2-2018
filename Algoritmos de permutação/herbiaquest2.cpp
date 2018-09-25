#include <iostream>
#define TAM 5

using namespace std;

void imprime_vetor(char vetor[TAM]);
void permutacao(char *a, char inicio, char fim);

void imprime_vetor(char vetor[TAM]){
	int i;
	cout <<"vetor = ";
	for(i = 0; i < TAM; i++){
		
		cout << vetor[i]<<"|";
	}
	cout <<"" << endl;
}

 void permutacao(char *a, char inicio,char fim){
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
 	char vetor[] = {'B','R','A','S','I','L'};
 	imprime_vetor(vetor);
 	permutacao(vetor,0,TAM);

	return 0;
 
 }

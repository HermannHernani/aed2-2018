#include <iostream>
#define TAM 5

using namespace std;

void imprime_vetor(int vetor[TAM]);
int total;
void combinatoria_sem (int vetor, int pos, int valor);

void imprime_vetor(int vetor[TAM]){
	int i;
	cout <<"vetor = ";
	for(i = 0; i < TAM; i++){

		cout << vetor[i]<<"|";
	}
	cout <<"" << endl;
}

void combinatoria_sem (int vetor, int pos, int valor){
	total++;
	int i;
	int r;
	for(int i = valor; i<TAM; i++){
		vetor[pos]= i;
		if(pos == (r-1)){
			imprime_vetor(vetor);
        }
		else{
            combinatoria_sem(vetor,pos+1,i);
        }

	}
}



 int main (){
 	int vetor[] = {};
 	imprime_vetor(vetor);
 	combinatoria_sem(vetor,0,TAM);
 	cout <<total;

	return 0;

 }

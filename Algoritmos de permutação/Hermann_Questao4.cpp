#include <iostream>
#define TAM 5

void imprime_vetor(int vetor[TAM]);
int total;
void combinatoria(int vetor[], int pos);

void imprime_vetor(int vetor[TAM]){
	int i;
	cout <<"vetor = ";
	for(i = 0; i < TAM; i++){

		cout << vetor[i]<<"|";
	}
	cout <<"" << endl;
}


void combinatoria(int vetor[], int pos){
    total++;
    for (int i = 1; i <= n; i++){
        vetor[pos] = i;
        if (pos == (r-1)){
            imprime_vetor(vetor);
        }
        else{
            combinatoria(vetor, pos+1);
        }
    }

}


int main(){
    int vetor = [1, 2];
    imprime_vetor(vetor);
    combinatoria_sem(vetor,0,TAM);



}

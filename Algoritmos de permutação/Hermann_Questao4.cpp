#include <iostream>
#define TAM 2

using namespace std;

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




int main(){

    int vec[] = {1, 2};
    imprime_vetor(vec);
    combinatoria(vec,0);

    return 0;
}

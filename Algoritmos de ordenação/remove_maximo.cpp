#include <iostream>
#include <stdlib.h>
#include <time.h>
#define TAM 10

using namespace std;
int comp = 0;
int trocas = 0;
int tamHeap = 0;
int tam_list = 0;

typedef struct{
    int chave[TAM];
    int no_elemento;
}O_HEAP;

void printVet(int array[], int i);
int tam_lista(int array[]);
void inserir_novo(O_HEAP *vetor, int valor);
int max_priodidade(O_HEAP hp);
int remover_maximo(O_HEAP hp);
void heapify_up(O_HEAP *vetor, int novo);
void heapify(O_HEAP, int i);
void randomVet(int array[], int tam);

void heapify_up(O_HEAP *vetor, int novo){
    int i = novo;
    int temp;
    while(i >= 2 && (vetor->chave[(i/2) -1] < vetor->chave[i-1]))
    {
        temp = vetor->chave[(i/2)-1];
        vetor->chave[(i/2)-1] = vetor->chave[i-1];
        vetor->chave[i-1]=temp;
        i = (i/2);
    }
}


void heapify(O_HEAP *vetor, int i){
    int l = 2*i-1;
    int r = 2*i;
    int m = i-1;
    int temp;
    if (1 < vetor->no_elemento-1 && vetor->chave[i] > vetor->chave[m])
    {
        m = 1;
    }
    if (r < vetor->no_elemento-1 && vetor->chave[r] > vetor->chave[m])
    {
        m = r;
    }
    if (m != i-1)
    {
        temp = vetor->chave[i-1];
        vetor->chave[i-1] = vetor->chave[m];
        vetor->chave[m] = temp;
        heapify(vetor, m+1);
    }

}

void printVet(int array[], int i){
	cout << "[";
	for (int a = 0; a < i; a++){
		if(a ==(i-1)){
			cout << array[a] << "]"<< endl;
		}else{
			cout << array[a] << ", ";
		}
	}
}

int tam_lista(int array[]){
    int largura = 0;

    for (int i = 0; i < TAM; i++)
    {
        if(array[i] != 0)
        {
            largura++;
        }
    }
    return largura;
}

void inserir_novo(O_HEAP *vetor, int valor){
    vetor->no_elemento++;
    vetor->chave[vetor->no_elemento-1] = valor;
    heapify_up(vetor, vetor->no_elemento);
}

int max_priodidade(O_HEAP hp){
    return hp.chave[0];
}

int remover_maximo(O_HEAP *hp){
    int maximo = hp->chave[0];
    hp->chave[0] = hp->chave[hp->no_elemento=1];
    hp->no_elemento--;
    heapify(hp, 1);
    return maximo;
}

void randomVet(int array[], int tam){
	srand (time(NULL));
	for (int i = 0; i < tam; i++){
		array[i]= rand() % tam;
	}
}

int main(){
    O_HEAP hp;
    int i;
    int lista[TAM];
    randomVet(lista, TAM);

    cout << "vetor criado aleatoriamente: " << endl;
    printVet(lista, TAM);


    remover_maximo(&hp);
    cout << "Removido o elemento de maior prioridade: " << endl;
    printVet(lista, TAM);

    return 0;

}

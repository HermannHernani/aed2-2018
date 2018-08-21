#include<iostream>
#include<stdlib.h>
#include <time.h>
#define TAM 1000

using namespace std;

int tamHeap = 0;
int comp = 0;
int trocas = 0;

void heapify(int array[], int i){
	int l = 2*i + 1;
	int r = 2*i + 2;
	int m = i;
	int temp;
	comp++;
	if(l < tamHeap && array[l] > array[m]){
		m = l;

	}
	comp++;
	if(r < tamHeap && array[r] > array[m]){
		m = r;
	}
	if(m!= i){
		temp = array[i];
		array[i] = array[m];
		array[m] = temp;
		trocas ++;
		heapify(array,m);
	}
}

void constHeap(int array[], int n){
	tamHeap = n;
	for(int i = n/2 - 1; i>=0; i--){
		heapify(array,i);
	}
}

void heapSort(int array[], int n){
	int temp;
	constHeap(array, n);
	for (int i = n-1; i>= 0; i--){
		temp = array[0];
		array[0]= array[i];
		array[i] = temp;
		trocas ++;
		tamHeap --;
		heapify(array, 0);
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

void VetCrescente(int array[], int tam){
	for (int i = 0; i < tam; i++){
		array[i]= i+1;
	}
}

void VetDecrescente(int array[], int tam){
	for (int i = 0; i < tam; i++){
		array[i] = tam - i;
	}
}

void randomVet(int array[], int tam){
	srand (time(NULL));
	for (int i = 0; i < tam; i++){
		array[i]= rand() % tam;
	}
}


int main(){
	int lista[TAM];
	VetCrescente(lista,TAM);
	VetDecrescente(lista, TAM);
	randomVet(lista, TAM);
	printVet(lista, TAM);
	cout << endl;
	heapSort(lista, TAM);
	printVet(lista,TAM);
	cout << "Comparacoes realizadas: "<< comp << endl;
	cout << "Trocas realizadas: "<< trocas << endl;
	return 0;
}

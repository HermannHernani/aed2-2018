#include <iostream>
#define TAM 5
using namespace std;


void printVetor(int arr[TAM])
{
   int i;
   for (i=0; i < TAM; i++)
       cout << (" %d ", arr[i]);
   cout << ("\n");
}

main(){
    int lista[TAM]={5, 4, 3, 2, 1};
    int indicie, indicieMenor, indicieSeguinte, aux;

    for (int indice = 0; indice < TAM; ++indice) {
        int indiceMenor = indice;
        for (int indiceSeguinte = indice+1; indiceSeguinte < TAM; ++indiceSeguinte) {
            if (lista[indiceSeguinte] < lista[indiceMenor]) {
                indiceMenor = indiceSeguinte;
            }
        }
        int aux = lista[indice];
        lista[indice] = lista[indiceMenor];
        lista[indiceMenor] = aux;
    }

    cout << endl;
    printVetor(lista);
    return 0;
}

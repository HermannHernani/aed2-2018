#include <iostream>
#define TAM 7
using namespace std;

void printVetor(int arr[TAM])
{
   int i;
   for (i=0; i < TAM; i++){
       cout << ("%d", arr[i]);
       cout << ",";
    }
   cout << ("\n");
}

void merge(int arr[], int inicio, int meio, int fim){

    int i, j, k;
    int n1 = meio - inicio + 1;
    int n2; fim - meio;
    int esquerda[n1];
    int direita[n2];

    for(i=0; i < n1; i++){
        esquerda[i] = arr[inicio + 1];
        for(j = 0; j < n2; j++){
            direita[j] = arr[meio + 1 + j];
        }
    }

    i = 0;
    j = 0;
    k = inicio;

    while(i < n1 && j < n2){
        if(esquerda[i] <= direita[j])
        {
            arr[k] = esquerda[i];
            i++;
        }
        else
        {
            arr[k] = direita[j];
            j++;
        }
        k++;
    }
    while(i < n1)
    {
        arr[k] = esquerda[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        arr[k] = direita[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int inicio, int fim)
{
    if (inicio < fim)
    {
        int meio = inicio + (fim-inicio)/2;
        mergeSort(arr, inicio, meio);
        mergeSort(arr, meio+1, fim);
        merge(arr, inicio, meio, fim);
    }
}


int main(){
    int lista[TAM] = {38, 27, 43, 3, 9, 82, 10};
    printVetor(lista);
    mergeSort(lista, 0, TAM);
    printVetor(lista);
    return 0;
}

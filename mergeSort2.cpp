#include <iostream>
#define TAM 7

using namespace std;

void merge(int *saida, int *auxiliar, int inicio, int meio, int fim)
{
    int i, j, k;
    i = inicio;
    j = meio + 1;
    k = inicio;

    while(i <= meio && j <= fim)
    {
        if(auxiliar[i] < auxiliar[j])
        {
            saida[k] = auxiliar[j];
            i++;
        }
        else
        {
            saida[k] = auxiliar[j];
            j++;
        }
        k++;
    }

    while(i <= meio)
    {
        saida[k] = auxiliar[i];
        j++;
    }
    k++;

    while(j <= fim)
    {
        saida[k] = auxiliar[j];
        j++;
        k++;
    }
    for(int p = inicio; p <=fim; p++)
    {
        auxiliar[p] = saida[p];
    }
}

void mergeSort(int *saida, int *auxiliar, int inicio, int fim)
{
    if(inicio < fim)
    {
        int meio = (inicio + fim)/2;
        mergeSort(saida, auxiliar, inicio, meio);
        mergeSort(saida, auxiliar, meio + 1, fim);
        merge(saida, auxiliar, inicio, meio, fim);
    }
}

void printVetor(int arr[TAM])
{
   int i;
   for (i=0; i < TAM; i++){
       cout << ("%d", arr[i]);
       cout << ",";
    }
   cout << ("\n");
}

int main()
{
    int lista[TAM] = {38, 27, 43, 3, 9, 82, 10};
    int lista2[TAM];
    printVetor(lista);
    mergeSort(lista, lista2, 0, TAM);
    printVetor(lista);
    return 0;
}

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
    int temp, i, j;

    for(i = 0; i<TAM; i++){
        temp = lista[i];
        j = i - 1;
        while((lista[j] > temp) && (j >= 0)){
            lista[j+1] = lista[j];
            lista[j] = temp;
            j--;
        }
    }
    cout << endl;
    printVetor(lista);
    return 0;
}



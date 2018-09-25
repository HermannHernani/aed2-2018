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
    int n, i, j, aux;

    for (i = 0; i < n-1; i++){

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++){
           if (lista[j] > lista[j+1]){
                int aux = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = aux;
            }
        }
    }
    cout << endl;
    printVetor(lista);
    return 0;
}

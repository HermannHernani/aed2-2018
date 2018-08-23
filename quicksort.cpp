#include <iostream>
#define TAM 10

using namespace std;

void quicksort(int valores[], int inicio, int fim)
{
	int i, j, pivo, aux;
	i = inicio;
	j = fim-1;
	pivo = valores[(inicio + fim) / 2];
	while(i <= j)
	{
		while(valores[i] < pivo && i < fim)
		{
			i++;
		}
		while(valores[j] > pivo && j > inicio)
		{
			j--;
		}
		if(i <= j)
		{
			aux = valores[i];
			valores[i] = valores[j];
			valores[j] = aux;
			i++;
			j--;
		}
	}
	if(j > inicio)
		quicksort(valores, inicio, j+1);
	if(i < fim)
		quicksort(valores, i, fim);
}

void printVetor(int arr[TAM])
{
   int i;
   for (i=0; i < TAM; i++)
    {
        cout << (" %d ", arr[i]);
        cout << (",");
    }
   cout << ("\n");
}


int main()
{
	int lista[TAM] = {5, 8, 1, 2, 7, 3, 6, 9, 4, 10};
	printVetor(lista);
	std::cout << std::endl;
	quicksort(lista, 0, TAM);
	printVetor(lista);
	return 0;
}

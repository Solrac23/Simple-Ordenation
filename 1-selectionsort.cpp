#include <iostream>
#include <stdio.h>
// #include <display.h>

using namespace std;
void swap(int &a, int &b)  //troca o conteúdo de a e b
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void display(int *array, int size) {
  for(int i = 0; i < size; i++) 
    cout << array[i] << " ";
  cout << endl;
}

void selectionSort(int *array, int size)
{
  int i, j, min;
  for (i = 0; i < size - 1; i++)
  {
    min = i; //obter índice de dados mínimos
    for (j = i + 1; j < size; j++)
      if (array[j] < array[min])

        min = j;
      //colocando na posição correta
      swap(array[i], array[min]);
  }
}

int main()
{
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;
  int arr[n];   //crie uma matriz com determinado número de elementos
  cout << "Enter elements:" << endl;
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  cout << "Array before Sorting: ";
  display(arr, n);
  selectionSort(arr, n);
  cout << "Array after Sorting: ";
  display(arr, n);
}

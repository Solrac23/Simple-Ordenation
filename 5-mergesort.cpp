#include<iostream>

using namespace std;

void swapping(int &a, int &b) {     //troque o conteúdo de a e b
   int temp;
   temp = a;
   a = b;
   b = temp;
}

void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}

void merge(int *array, int l, int m, int r) {
   int i, j, k, nl, nr;
   //tamanho das submatrizes esquerda e direita
   nl = m-l+1; nr = r-m;
   int larr[nl], rarr[nr];
   //preencher submatrizes esquerda e direita
   for(i = 0; i<nl; i++)
      larr[i] = array[l+i];
   for(j = 0; j<nr; j++)
      rarr[j] = array[m+1+j];
   i = 0; j = 0; k = l;
   //marge arrays temporários para array real
   while(i < nl && j<nr) {
      if(larr[i] <= rarr[j]) {
         array[k] = larr[i];
         i++;
      }else{
         array[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<nl) {       //elemento extra na matriz esquerda
      array[k] = larr[i];
      i++; k++;
   }
   while(j<nr) {     //elemento extra na matriz direita
      array[k] = rarr[j];
      j++; k++;
   }
}

void mergeSort(int *array, int l, int r) {
   int m;
   if(l < r) {
      int m = l+(r-l)/2;
      // Classificar primeiro e segundo arrays
      mergeSort(array, l, m);
      mergeSort(array, m+1, r);
      merge(array, l, m, r);
   }
}

int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];     //crie uma matriz com determinado número de elementos
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   mergeSort(arr, 0, n-1);     //(n-1) para o último índice
   cout << "Array after Sorting: ";
   display(arr, n);
}
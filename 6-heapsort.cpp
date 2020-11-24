#include <iostream>

using namespace std;

void max_Heapify(int* vetor, int i, int tamVetor){
	int left = 2*i;
	int right = 2*i+1;
	int max;
	if(left <= tamVetor && vetor[left] > vetor[i] ){
		max = left;
	}
	else{
		max = i;
	}
	if(right <= tamVetor && vetor[right] > vetor[max]){
		max = right;
	}
	if(max != i){
		int aux = vetor[i];
		vetor[i] = vetor[max];
		vetor[max] = aux;
		max_Heapify(vetor,max,tamVetor);
	}
}

void build_Heap(int* vetor, int tamVetor){
	for(int i=tamVetor/2;i>=0;i--){
		max_Heapify(vetor,i,tamVetor);
	}
}

void Heapsort(int* vetor, int tamVetor){
	build_Heap(vetor,tamVetor);
	for(int i=tamVetor;i>=1;i--){
		int aux = vetor[0];
		vetor[0] = vetor[i];
		vetor[i] = aux;
		tamVetor--;
		max_Heapify(vetor,0,tamVetor);
	}
}
int main(){
	int vetor[] = {4,1,3,2,16,9,10,14,8,7}; // Armazena os valores no array
	Heapsort(vetor,10);   // A quantidade que vai dentro do array
	for(int i=0;i<10;i++){
		cout << vetor[i] << " ";
	}
	cout << endl;
   // vetor ordenado: 1,2,3,4,7,8,9,10,14,16}
}
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;
 
 
void SelectionSort(int vetor[], int tam){

 int i, j, aux,menor;

	// Laço externo 
	for(i = 0; i < (tam-1); i++){
		menor = i;  // primeiro numero não ordenado
		
		for(j = i+1; j < tam;j++){
			if(vetor[j]< vetor[menor]){

			  menor = j;
		    }
		}

	    if(i != j){
	    	aux = vetor[i];
	    	vetor[i] = vetor[menor];
	    	vetor[menor] = aux;

	    }	
    }


     for(i = 0;i < tam; i++){
     	cout << " [ "<< vetor[i] <<" ]"<<endl; 
	 }

    cout << endl<< endl;

}

int main(){

int  i = 0;
int array[100000];
char conteudo[100000];
char nome_arq[50];

   	

   	cout << "Digite o nome do arquivo: " << endl;
   	cin >> nome_arq;

   	 ifstream file;
	 file.open(nome_arq);
	  
	 if(file.is_open()){
	
	  	while(!file.eof()){
		
		file >> conteudo;
		array[i] = atoi(conteudo);
		i++;

	}
}
	SelectionSort(array,i);
	file.close();

return 0;
}
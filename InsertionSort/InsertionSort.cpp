#include <stdio.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std ;


void InsertionSort(int array[], int tam){
	int i, j, aux;

	for(i = 1; i < tam; i++){
		j = i;
		
		while(j > 0 && array[j-1] > array[j]){
			aux = array[j];
			array[j] = array[j-1];
			array[j-1] = aux;

			j--;
		}
	}


		for(i = 0;i < tam; i++){
     	cout << " [ "<< array[i] <<" ]"<<endl; 
	 }

    cout << endl<< endl;
}

int main(){

int i=0;
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

	InsertionSort(array,i);
	file.close();	
   
    
return 0;
}
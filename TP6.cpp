/*
*Dados un conjunto de valores enteros y positivos determinar e informar el mayor
*Dinardi, Emiliano
*06/06/2015
*/

#include <iostream>
using namespace std;

int NumeroMayor(int);

int main() {
	int a;
	cout << "Ingesar un numero entero posivo \n";
	cin >> a;
	cout << "El mayor de los numeros ingresados es: " << (NumeroMayor(a)); 	
}

int NumeroMayor(int a){
	int b=0;
	
	while(a>0){
		if(a>b){
			b=a;
		}	
		cout << "Ingesar un numero entero posivo \n";
		cin >> a;	
	}
	return b;
}

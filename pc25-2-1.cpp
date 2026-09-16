//Diseñe un programa que permita leer un número enteros positivo cuyo número de cifras es mayor a 3.
//Luego el programa debe presentar la mediana de los dígitos de dicho número.
//
//Ejemplo 1: Caso de un número con 7 cifras (# de cifras impar)
//Se ingresa: 4567071
//Los dígitos ordenados en forma creciente son: 0 1 4 5 6 7 7
//Salida (la mediana es el dígito central): 5
//
//Ejemplo 2: Caso de un número de 6 cifras (# de cifras par)
//Se ingresa: 432818
//Los dígitos ordenados en forma creciente son: 1 2 3 4 8 8
//Salida (la mediana es el promedio redondeado de los dos centrales): 4
//
//Nota: No puede emplear arreglos, ni cadenas, ni funciones predefinidas ni definidas por el usuario.

#include <iostream>
using namespace std;

int main() {

	int num, aux = 0, resultado = 0, cifras = 0;
	cout << "numero: "; cin >> num;
	
	// 231
	aux = num;
	for (int i = 9; i>= 0; i--) {
		while (aux > 0) {
			if (aux%10 == i) {
				resultado = resultado*10 + i;
			}
			aux /= 10;
		}
		aux = num;
	}

	while (aux>0) {
		cifras++;
		aux /= 10;
	}
	
	aux = 1;
	cout << resultado << endl;
	for (int i = cifras/2; i>0; i--) {
		aux *= 10;
	}
	if (cifras%2 == 1) {	
		cout << "resultado: " << (resultado%(aux*10) - resultado%(aux))/aux << endl;
	} else {
		cout << "resultado: " << ((resultado%(aux*10) - resultado%(aux))/aux + (resultado%(aux) - resultado%(aux/10))/(aux/10))/2 + 1;
	}
	
	return 0;
}
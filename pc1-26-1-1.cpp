//Diseñe un algoritmo que permita recibir dos números enteros positivos cuyo número de cifras sea menor a 9. 
//Luego modificar el primer número eliminando las cifras que existan en el segundo número. 

//Ejemplo 1: Si se ingresa 364798 y 427
//El número modificado será 3698      (se eliminaron el 4 y el 7)

//Ejemplo 2: Si se ingresa 3764972 y 1675
//El número modificado será 3492      (se eliminaron el 6 y el 7)

//Nota: resolver sin emplear arreglos, ni cadenas, ni funciones externas ni propias.

#include <iostream>
using namespace std;

int main() {
	
	int n1, n2;
	cout << "n1: "; cin >> n1;
	cout << "n2: "; cin >> n2;
	
	// Cifras de n2
	int aux = n2, cifras = 0;
	for (int i = 0; aux>0; i++) {
		cifras ++;
		aux /= 10;
	}
	
	// Generar numero final
	while (n2 > 0) {
		while (n1 > 0) {
			if (n1%10 != n2%10) {
				aux = aux * 10 + n1%10;
			}
			n1 /= 10;
		}
		n2 /= 10;
		n1 = aux;
		aux = 0;
	}
	
	// Verificar orden del resultado e imprimir
	if (cifras % 2 != 0) {
		while (n1 > 0) {
			aux = aux * 10 + n1%10;
			n1 /= 10;
		}
		cout << "resultado: " << aux << endl;
	} else {
		cout << "resultado: " << n1 << endl;
	}
	return 0;
}
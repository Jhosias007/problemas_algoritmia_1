//Escribir un programa en C++ que solicita al usuario un número X de 6 cifras.
//El programa debe extraer los dígitos que ocupan las posiciones pares (segunda, cuarta y sexta) y formar con ellos un nuevo número Y de 3 cifras.
//Luego, debe calcular la suma de los dígitos del número original X que sean mayores a 5. Finalmente, indique si el número Y es múltiplo de dicha suma.

//Ejemplo 1: X = 172839. Dígitos en posiciones pares: 7, 8, 9. 
//Formamos Y = 789. Dígitos de X > 5: 7, 8, 9 (Suma = 24).
//Resultado: 789 no es múltiplo de 24.

//Ejemplo 2: X = 461250. Dígitos en posiciones pares: 6, 2, 0.
//Formamos Y = 620. Dígitos de X > 5: 6 (Suma = 6). 
//Resultado: 620 no es múltiplo de 6.

//Nota: No se deben usar: arreglos, cadenas ni funciones.

#include <iostream>
using namespace std;

int main() {
	
	int x, num = 0, suma_cfs = 0, aux = 0;
	
	// Validar x
	while (true) {
		cout << "X (6 cifras): "; cin >> x;
		num = x;
		while (num>0) {
			aux ++;
			num /= 10;
		}
		if (aux == 6)
			break;
		aux = 0;
	}
	
	num = (x%100000 - x%10000)/100 + (x%1000 - x%100)/10 + x%10;
	
	while (x > 0) {
		if (x%10 > 5) {
			suma_cfs += x%10;
		}
		x /= 10;
	}
	
	if (num % suma_cfs == 0) {
		cout << num << " es multiplo de " << suma_cfs;
	} else {
		cout << num << " no es multiplo de " << suma_cfs;
	}
	
	return 0;
}
//Disegne un programa en C++, que permita leer un número entero positivo cuyo número de cifras sea mayor a 3 peor no mayor a 8.
//Luego el programa debe modificar el menor número de dígitos para que sea capicúa con el mismo número de cifras.
//Si hubiese más de una alternativa, presente el número mayor.      

//4667 -> 7667
//17357 -> 77377

//Nota: No puede emplear arreglos, ni cadenas, ni funciones predefinidas ni definidas por el usuario.

#include <iostream>
using namespace std;

int main() {

	// Obtener num
	int num, aux = 0, resultado = 0;
	cout << "numero: "; cin >> num;

	// aux tomara el numero en reversa
	resultado = num;
	while (resultado > 0) {
		aux = aux*10 + resultado%10;
		resultado /= 10;
	}
	
	// comparar una a una las cifras de num y aux y almacenar en resultado
	while (aux > 0) {
		resultado = resultado*10 + (num%10 >= aux%10)*(num%10) + (num%10 < aux%10)*(aux%10);
		num /= 10; aux /= 10;
	}
	
	cout << resultado;

	return 0;
}
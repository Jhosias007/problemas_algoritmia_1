// Convertir un numero a una base diferente

#include <iostream>
using namespace std;

int main () {

  int n, base;
  cout << "numero: "; cin >> n;
  cout << "base: "; cin >> base;

  //definir variables
  int nr = 0;
  int cifras_n = 1; // inicia en 1 porque el bucle while no cuenta el cociente final
  int cifras_nr = 0;
  int n_final = 0;

  // agregar cifras convertidas a numeroReversa (nr)
  while (n>=base) {
    nr = (nr * 10) + n % base;
    n /= base;
    cifras_n ++;
  }
  nr = (nr * 10) + n % base; // se agrega el cociente final a nr

  // Voltear nr y almacenar en n_final
  while (nr > 0) {
    n_final = n_final * 10 + nr%10;
    nr /= 10;
    cifras_nr ++;
  }

  // Agregar ceros perdidos
  for (int i = 1; i <= (cifras_n - cifras_nr); i++) {
    n_final *= 10;
  }
  
  cout << "resultado: " << n_final << endl;

  return 0;
}
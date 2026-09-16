// Dado un numero, ordenar sus cifras de mayor a menor

#include <iostream>
using namespace std;


int main () {

    long long n;
    cout << "numero: "; cin >> n;

    // inicializar variables
    int n_final = 0;
    int cifras = 0;
    int n_aux = n;

    //Obtener numero de cifras de n
    while (n_aux > 0) {
        cifras ++;
        n_aux /= 10;
    }

    //Obtener n_final
    for (int i = 10; i>=0; i--) {
        for (int j = 1; j <= cifras; j++) {
            if (n_aux%10 == i) {
                n_final = n_final * 10 + i;
            }
            n_aux /= 10;
        }
        n_aux = n;
    }

    cout << "n_final: " << n_final;

    return 0;
}

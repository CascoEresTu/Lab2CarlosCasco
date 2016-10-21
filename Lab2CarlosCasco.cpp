#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
//#include <stdlib>

using namespace std;

void ConvertBase(string);
void ejercicio2(int);
void CambioADecimal(string);

int main() {

  int s = 0;
	while(s==0){


    int op = 0;

    string title ="Laboratorio # 2 \n";

    string options = "1)Ejercicio 1 \n2)Ejercicio 2\n3)Ejercicio 3\n";
    cout<<options;
    cout<<"Seleccione una opcion.\n";
    cin >> op;

    if (op ==1) {
      string numero = "";
      cout<<"Ingrese un numero.\n";

      cin >> numero;

      CambioADecimal(numero);
    }
    if (op ==2) {
      int numero = 0;
      cout<<"Ingrese un numero.\n";
      cin>>numero;
      ejercicio2(numero);
//      cout<<"spoof\n";
    }
    if (op ==3) {
      cout<<"spoof\n";
    }

    cout<<"Desea Continuar? 0|1 \n";
		cin>>s;
}
  return 0;
}

void ejercicio2(int numero) {

  int cont = 0 ;
  int sum = 0;
  for (int i = 1; i <=numero; i++) {
    if (numero % i == 0 ) {

      cout << i << endl;
      int numerador = i + numero;
      int denominador = i;
      double operacion = numerador /denominador;
        std::cout << "operación" << std::endl;
        std::cout << operacion << std::endl;
      sum +=  int(operacion);
      cont++;
    }
  }
  std::cout << sum << std::endl;


}

void CambioADecimal(string numero){

  // esta variable es la base que queremos buscar
  int suma = 0;
  //numero = "102";
  double a = 0;
  int tamanio = numero.size();
  int mayor = numero[0] - 48;

  for (int i = 0; i < tamanio; i++) {
        if (numero[i]-48 > mayor) {
           mayor = numero[i] - 48;
        }
    }


    suma = mayor + 1;
  //  cout<< suma<< endl;

    int posicion = suma;
    int nuevoNumero = 0;
    int total = 0;
    int cont = 0;
    for (int j = posicion-1; j >= 0 ; j--) {

          nuevoNumero = (numero[j] - 48) *pow (suma,cont);


          total+= nuevoNumero;

          cont++;

      }

        cout <<numero<<" esta en base "<<suma<<" y equivale a "<<total<<" en base decimal."<<endl;
}

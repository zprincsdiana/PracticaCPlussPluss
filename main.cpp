#include <iostream>
//Funciones básicas de entrada y salida

using namespace std;
//Contenedor (Espacio de nombres) std (por <standard>) 
//único que agrupa todas las librerías de C++ Estandar
/* Un espacio den ombres agreupa funciones e identificadores
Estos nombres de funciones e idenfiticadores pueden repetirse en otro espacio de nombres
Por ejemplo: "NS3"
*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//cout << "Hola UTP2021"; //Muestra mensaje en consola ( pantalla)
	/*Tipos de operadores
	string nombre; //Almacenamos el nombre
	cout <<"Ingrese su nombre \n";
	cin>> nombre;
	cout <<"Usted es: \n" <<nombre<< "\n"; //Muestra
	
	int x,y;
	float z;
	char q ='!';
	//Inicializar
	x=1;
	y=2;
	z=x+y;
	cout<<"La suma es: " << z << " " << q <<"\n" ;
	cout <<"Muchas gracias";

	return 0;
	*/
	
	/*Bucles
	Elabore un programa que muestre en pantalla el número ingresado siempre 
	que sea menor a 20, y lo incremente de 1 en 1 hasta el 20, un valor en cada 
	línea. 
	*/
	
	int a;
	cout <<"Ingrese número menor a 20: " <<endl;
	cin>> a;
	while (a<20){
		cout << "value of a: "<<a<< endl;
		a++;
	}
	
	cout <<"Muchas gracias";
	
	return 0;
	
}

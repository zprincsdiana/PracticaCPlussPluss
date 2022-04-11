#include <iostream>
using namespace std;

int main() { //Inicia ejecución del programa
	/*	//Declaracion de variables
	int x,y;
	float z;
	//Inicializamos las var
	int k=22;
	char q = '!';
	
	//asignación de valores
	x=1; y=2; z=x+y;
	
	cout<< "La suma es -> " <<z <<" - "<<q ;
	*/
	
	/*Creación de tipos de datos en C++ -- TYPEDEF
	//Declaracion de variables
	int x,y;
	typedef int entero; //Nuevo nombre de int: entero
	entero edad; //Variableedad es de tipo "entero"
	edad = 25; //Se asigna valor a la variable edad
	
	cout<<"La edad es "<<edad<< endl;
	*/
	
	/* Tipos enumerados -- Se define un nombre de tipo enumerado y los valores que puede tener , se declara la variable de ese tipo
	//Declaración de variables
	enum local {torre2 = 4, sedecentral, pacifico} c;
	c = torre2;
	cout<< "El local es: " << c << endl; //Print
	*/
	
	//Pr+actica 3
	/*
	Implementar un programa que realice la adicion y asignacion de una variable. A a una var C . se inicializa C=10 y A=30 Mostrando A=10 y C=40;
	*/
	
	int A=30;
	int C=10;
	int n=0;
	cout<< "Variable A " <<A <<"\n";
	cout<< "Variable C " <<C <<"\n";
	cout<< "--- Cambio de datos ---\n";
	n=C;
	C+=A;
	A=n;
	cout<<"El cambio es C:"<< C<<" y A: "<<A;
	
	
	
	return 0;
}

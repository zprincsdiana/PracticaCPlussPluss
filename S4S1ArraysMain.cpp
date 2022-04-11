#include <iostream>
#include <ctime>
using namespace std;
#include <iomanip>
using std::setw;

/* setw <-- es para generar espacios entre los elementos
cout<< <-- para mostrar 
cin >> <-- para ingresar un valor desde el teclado
*/
//Declaramos una funcion que se usaraá para USO DE PUNTEROS y va antes del main
void getSeconds(unsigned long *parametro);
// Declaración de función-llamada por referencia
void swap(int& x, int& y);  

int main(int argc, char** argv) {
	
		cout<<"*********ARRAYS COMO VECTORES***********"<<endl;
	//Caso 1 : ***************Array como vector****************
	int n[10]; // n es un array de 10 ints
	//Inicializar elementos del array n a 0
	for(int i=0;i<10;i++){
		n[i]=i+100; // Set elements at location i to i+100
	}
	
	cout <<"Element" <<setw(15) << " Value "<<endl;
	
	//output each array element's value
	for(int j=0;j<10;j++){
		cout<< setw(7)<< j << setw(13)<< n[j]<<endl;
	}


	cout<<"********* ARRAAAYS  COMO DIMENSIONES ***********"<<endl;
	//CASO2 -- *******************Array con varias dimensiones****************
	/*	Un array puede tener varias dimensiones
	Por ejemplo , un array de 2 dimensiones sería: type arrayname[x][y] 
	int array x[3][4]
	Se puede inicializar el array: 
	int array X[3][4] = {0,1,2,3,4,5} ó 
	int array X[3][4] = {
		{0,1,2,3},	-- Fila 0
		{4,5,6,7}.	-- Fila 1
		{8,9,10,11} -- Fila 2
	}
	*/

	//Arreglo de 5 filas y 2 columnas
	int a[5][2] = {{0,0},{1,2},{2,4},{3,6},{4,8}};
	
	//Salida - output con un for de los elementos del array y su valor
	for(int i=0; i<5 ;i++){
		for(int j=0; j<2 ;j++){
			cout<< "a[" << i <<"] ["<<j<<"]: ";
			cout <<a[i][j]<<endl;
		}
	}

	
	cout<<"*********PUNTEROS***********"<<endl;
		// ***************TEMA - PUNTEROS ***********************
	/* Variable cuy valor es la dirección de memoria de otra variable
	Operaciones : 
	- Definir una variable puntero  
	- Asignar la dirección de la variable al puntero 
	- Acesar al valor ubicado en la dirección de memoria almacenado en el puntero, mediante el operador -> * 
	- C/variable tiene 1 ubicación en memoria, la cual puede ser obtenida usando el operador -> &
	*/
	int varMuestra = 17; //Declaración de variable y asignación
	int *punteroX; //Declaración de variable puntero
	//Almacenar la dirección de memoria de la variable varMuestra
	
	punteroX = &varMuestra; // <-- con el & obtenemos la ubicación en memoria del valor de la varMuestra ( es 17 en este caso)
	//Mostrar
	cout<<"Valor de la variable varMuestra ->" << varMuestra << endl;
	//Mostrando la dirección de memoria almacenada en el puntero
	cout << "Address stored in IP Variable: ";
	cout << punteroX << endl;
	//Acceso al valor indicado en la dirección de memoria indicado en el puntero
	cout << "Valor almacenado en la dirección de memoria de *punteroX:";
	cout<< *punteroX<<endl;
	
	

	cout<<"*********REFERENCIAS***********"<<endl;
		// *************** TEMA - REFERENCIAS ***********************
	/* ES UN ALIAS de una variable existente , se usa el operador -> & // Se emplea para pasar valor por referencia en funciones
	*/
	int edad = 27;
	int& antiguedad = edad;
	cout<< edad <<"\n"; // Muestra el valor de la raviable
	cout <<antiguedad << "\n"; // Muestra el valor de referencia
	
		cout<<"********* Uso de PUNTEROS con funciones ***********"<<endl;
	// *************** TEMA - USO DE PUNTEROS ***********************
	/* QUE VALORES SE PASAN A LA FUNCION / COMO SE LOGRA MDIFICAR EL VALOR DE LA VARIABLE SEGUNDOS ACTUALES
	1.- antes del main(), se declara la funcion getSeconds con variable segundosActuales 
	*/
	unsigned long segundosActuales;
	getSeconds(&segundosActuales);
	//Mostrar el valor asignado
	cout<< "Hora local en segundos:" <<segundosActuales<<endl;
	
	
	
	cout<<"********* Uso de REFERENCIAS con funciones ***********"<<endl;
	// *************** TEMA - USO DE REFERENCIAS ***********************
	/* QUE VALORES SE MUESTRA DE A Y B , SUS VALORES FUERON CAMBIADOS? */
	int f = 100;
	int g = 200;
	swap(f, g);
	
	cout << "Valor de a :" << f << endl;
	cout << "Valor de b :" << g << endl;
	
	cout<<"******EJERCICIIOO*****"<<endl;
	/*Programa que halle el nro mayor ingresando datos en el teclado
	int numeros[5];
	int nu=5; 
	int mayor=0;
	for(int i=0; i<nu ;i=i+1){
		cout<<"INGRESE UN NUMERO: ";
		cin>>numeros[i];
		if(numeros[i]>mayor){
			mayor=numeros[i];
		}
	}
	cout<<"\n El numero mayor del arreglo es: "<<mayor<<endl;
	*/
	int arr[3];
	int nota1,nota2,nota3;
	float promedio=0;
	float suma=0;
	string nombre="";
	
	for(int o= 0 ; o<3; o++){
		cout<<"Ingrese nombre del alumno "<<(o+1)<<" ->";
		cin >> nombre;
		cout<< "Ingrese nota 1"<<endl;
		cin>>nota1;
		cout<< "Ingrese nota 2"<<endl;
		cin>>nota2;
		cout<< "Ingrese nota 3"<<endl;
		cin>>nota3;
		promedio = ((nota1*0.25)+(nota2*0.25)+(nota3*0.5));
		
		cout<<"Promedio del alumno "<< nombre << " es->"<<promedio<<endl;
	}
		
	return 0;
}


//FUNCION -- USO DE PUNTEROS CON FUNCIONES
	void getSeconds(unsigned long *parametro){
		//Obtener los segundos actuales
		*parametro = time(NULL);
		return;
	}

// Definición de función. Llamada por referencia. -- USO DE REFERENCAIA CON FUNCIONES
	void swap(int& x, int& y) {  
		int temp;
		temp = x; /* save the value at address x */  
		x = y; /* put y into x */
		y = temp; /* put x into y */
		return;
	}
	
	
	
	



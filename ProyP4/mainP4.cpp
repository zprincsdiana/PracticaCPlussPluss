#include <iostream>
using namespace std;
#include <iomanip>
using std::setw;

/* Desarrolla un programa que contenga una matriz de dos dimensiones. (Elegir) y explicar brevemente su funcionalidad. */

int main(int argc, char** argv) {
	/*El siguiente ejemplo es sobre un arreglo bidimensional 6x2 (6 filas - 2 columnas)
	que contiene una lista de 6 alumnos con sus respectivas edades 
	Para ello, se está utilizando un buclo for para recorrer el arreglo y mostrar los valores de cada fila y columna
	por ejemplo , para la fila 1 columna 1 , el valor es Lucía y su edad es 16
	Dentro del primer for, se van a recorrer las filas del arreglo y dentro del 2do for se recorre la columna de cada fila.
	Para darle forma estamos utilizando la funcion setw para dar archo al título de la cabecera del arreglo en la consola
	Finalmente, realizamos una condicional dentro del 2do for para acomodar las edades y su espacio
	*/	
	
	string vector[6][2]={
						{"Lucia","16"},
						{"Carlos","18"},
						{"Carmen","25"},
						{"Manuel","20"},
						{"Maria","50"},
						{"Jesus","26"}
						};
	cout <<"Nombre"<<setw(17)<<"Edad"<<endl;
	
	for(int i=0; i<6 ;i++){
		for(int j=0; j<2 ;j++){
			if(j%2==0){
				cout<<vector[i][j];
			}else{
				cout<<setw(17)<<vector[i][j]<<endl;
			}
		}
	}
	
	return 0;
}

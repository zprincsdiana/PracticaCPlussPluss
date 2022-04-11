#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int A1nota1 , A1nota2 , A1nota3;
	int A2nota1 , A2nota2 , A2nota3;
	int A3nota1 , A3nota2 , A3nota3;
	int A4nota1 , A4nota2 , A4nota3;
	int A5nota1 , A5nota2 , A5nota3;
	int A6nota1 , A6nota2 , A6nota3;
	double prom1 , prom2 , prom3, prom4, prom5, prom6;
	
	cout<<"Ingrese nota 1 del alumno 1 : ";
	cin>>A1nota1;
	
	cout<<"Ingrese nota 2 del alumno 1 : ";
	cin>>A1nota2;
	
	cout<<"Ingrese nota 3 del alumno 1 : ";
	cin>>A1nota3;
	
	cout<<"\nIngrese nota 1 del alumno 2 : ";
	cin>>A2nota1;
	
	cout<<"Ingrese nota 2 del alumno 2 : ";
	cin>>A2nota2;
	
	cout<<"Ingrese nota 3 del alumno 2 : ";
	cin>>A2nota3;
	
	cout<<"\nIngrese nota 1 del alumno 3 : ";
	cin>>A3nota1;
	
	cout<<"Ingrese nota 2 del alumno 3 : ";
	cin>>A3nota2;
	
	cout<<"Ingrese nota 3 del alumno 3 : ";
	cin>>A3nota3;
	
	cout<<"\nIngrese nota 1 del alumno 4 : ";
	cin>>A4nota1;
	
	cout<<"Ingrese nota 2 del alumno 4 : ";
	cin>>A4nota2;
	
	cout<<"Ingrese nota 3 del alumno 4 : ";
	cin>>A4nota3;
	
	
	cout<<"\nIngrese nota 1 del alumno 5 : ";
	cin>>A5nota1;
	
	cout<<"Ingrese nota 2 del alumno 5 : ";
	cin>>A5nota2;
	
	cout<<"Ingrese nota 3 del alumno 5 : ";
	cin>>A5nota3;
	
	cout<<"\nIngrese nota 1 del alumno 6 : ";
	cin>>A6nota1;
	
	cout<<"Ingrese nota 2 del alumno 6 : ";
	cin>>A6nota2;
	
	cout<<"Ingrese nota 3 del alumno 6 : ";
	cin>>A6nota3;
	
	
	prom1 = A1nota1 * 0.3 + A1nota2 * 0.45 + A1nota3 * 0.25;
	prom2 = A2nota1 * 0.3 + A2nota2 * 0.45 + A2nota3 *  0.25;
	prom3 = A3nota1 * 0.3 + A3nota2 * 0.45 + A3nota3 *  0.25;
	prom4 = A4nota1 * 0.3 + A4nota2 * 0.45 + A4nota3 *  0.25;
	prom5 = A5nota1 * 0.3 + A5nota2 * 0.45 + A5nota3 *  0.25;
	prom6 = A6nota1 * 0.3 + A6nota2 * 0.45 + A6nota3 *  0.25;
	
	cout<<"El promedio del alumno 1 es de "<<prom1<<endl;
	cout<<"El promedio del alumno 2 es de "<<prom2<<endl;
	cout<<"El promedio del alumno 3 es de "<<prom3<<endl;
	cout<<"El promedio del alumno 4 es de "<<prom4<<endl;
	cout<<"El promedio del alumno 5 es de "<<prom5<<endl;
	cout<<"El promedio del alumno 6 es de "<<prom6<<endl;
	

	
	if (prom1 > 12 )
		{
		cout<<"El alumno ha aprobado la materia.\n";
		}
	else
		cout<<"El alumno ha desaprobado la materia.\n";
	}
	
	if (prom2 > 12 )
		{
		cout<<"El alumno ha aprobado la materia.\n";
		}
	else
		cout<<"El alumno ha desaprobado la materia.\n";
	}
	if (prom3 > 12 )
		{
		cout<<"El alumno ha aprobado la materia.\n";
		}
	else
		cout<<"El alumno ha desaprobado la materia.\n";
	}
	if (prom4 > 12 )
		{
		cout<<"El alumno ha aprobado la materia.\n";
		}
	else
		cout<<"El alumno ha desaprobado la materia.\n";
	}
	if (prom5 > 12 )
		{
		cout<<"El alumno ha aprobado la materia.\n";
		}
	else
		cout<<"El alumno ha desaprobado la materia.\n";
	}
	if (prom6 > 12 )
		{
		cout<<"El alumno ha aprobado la materia.\n";
		}
	else
		cout<<"El alumno ha desaprobado la materia.\n";
	}
	
	
	
	
	return 0;
}


/* Implemente un programa que calcule la nota de un aula de 6 alumnos. Considerar que son 4 prácticas de los siguientes pesos (12% 18%, 45% 25%) y  
	la  nota final es el promedio de las notas las de las prácticas, con sus respectivos pesos. 
	Cabe indicar, que debe mostrar un mensaje de aprobado o desaprobado según corresponda.*/
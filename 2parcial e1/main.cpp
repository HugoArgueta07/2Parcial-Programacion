// Hugo Andreé Argueta Rodas    0909-20-4492
// Serie 2 Segundo Parcial

//Declaración de Librerias
#include <iostream>
#include <conio.h>

using namespace std;

//Declaración de Variables y Vectores
int curso[2][5];
int sumCurso[2];
float promCurso[2];
int c, e, op;

//Estructura para Ingreso de cada Curso
void ingresoDatos(){
	for ( c = 0; c <= 1; c++ ){
		for ( e = 0; e <= 4; e++ ){ 
			cout << "Ingreso de nota en la clase " << c + 1 << " del estudiante " << e + 1 << " = "; 
			cin >> curso[c][e];
		}
	}
}

//Estructura para calcular el promedio de cada curso
void calculoPromedio(){
	for ( c = 0; c <= 1; c++ ){
		for ( e = 0; e <= 4; e++ ){ // Saltos en cada estudiante "1-5"
			sumCurso[c] += curso[c][e];
		}
		promCurso[c] = sumCurso[c] / 5;
	}
}

//Estructura para Mostrar en Pantalla los vectores y sus promedios
void mostrarVectores(){
	cout << "Vector Curso 1"; 
	for ( e = 0; e <= 4; e++ ){
		cout << "     " << curso[0][e];
	}
	cout << "\nEl promedio del curso es:  " << promCurso[0];
	cout<<endl;
	cout << "Vector Curso 2";
	for ( e = 0; e <= 4; e++ ){
		cout << "     " << curso[1][e];
	}
	cout << "\nEl promedio del curso es:  " << promCurso[1];
}

//Estructura Principal
int main(){	
	do{
		// Mostrar en Pantalla
		cout << "Sistema para el calculo de promedio" << endl;
		cout << "1. Ingresar datos de cada curso" << endl;
		cout << "2. Mostrar la primera nota del Vector 1" << endl;
		cout << "3. Mostrar la última nota del Vector 2" << endl;
		cout << "4. Calcule el promedio de los cursos." << endl;
		cout << "5. Mostrar los dos Vectores, y el resultado Promedio de cada curso." << endl;
		cout << "6. Finalizar." << endl;
		cout << "Elija Una Opcion: "; cin >> op;
		cout << endl << endl;
		
		switch ( op ){ 
			case 1: 
				ingresoDatos();
				system ("cls");  // Limpieza de pantalla
				break; // Salir Switch
			case 2: 
				cout << "La primera nota del Vector 1 es: " << curso[0][0];
				getch();
				system ("cls");  // Limpieza de pantalla 
				break;
			case 3: 
				cout << "La ultima nota del Vector 2 es: " << curso[1][4]; 
				getch();
				system ("cls");  // Limpieza de pantalla
				break; 
			case 4: 
				calculoPromedio();
				cout << "El calculo se ha realizado correctamente" << endl;
				getch();
				system ("cls");  // Limpieza de pantalla
				break;
			case 5: 
				mostrarVectores();
				getch();
				system ("cls");  // Limpieza de pantalla
				break;
			case 6: break; 
			default: 
				cout << "\nEsta Opcion no esta disponible" << endl;
				system ("pause"); // Detener Programa
				system ("cls");  // Limpieza de pantalla
		}
	} while ( op != 6 );
}

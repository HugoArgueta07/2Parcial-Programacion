// Hugo Andreé Argueta Rodas    0909-20-4492
// Serie 3.1 Segundo Parcial

//Declaración de Librerias
#include <iostream>
#include <conio.h>

using namespace std;

//Declaración de Variables y Vectores
int alfa[3][3];
int total[3];
int f, c, op;

//Estructura para Ingreso de datos de Matriz ALFA
void ingresoDatos(){
	for ( f = 0; f <= 2; f++ ){
		for ( c = 0; c <= 2; c++ ){
			cout << "Ingreso dato en la fila " << f + 1 << " columna " << c + 1 << " = "; 
			cin >> alfa[f][c];
		}
	}
}

//Estructura para Sumar filas de la Matriz ALFA
void sumaTotal(){
	total[0] = alfa[0][0] + alfa[1][1] + alfa[2][2];
	total[1] = alfa[2][0] + alfa[2][1] + alfa[2][2];
	total[2] = alfa[2][0] + alfa[1][1] + alfa[0][2];
}

//Estructura para Mostrar Matriz ALFA y Vector TOTAL
void mostrarMatrizVector(){
	cout << " Matriz ALFA " << endl;
	for ( f = 0; f <= 2; f++ ){
		cout << "  " << alfa[f][0] << "  " << alfa[f][1] << "  " << alfa[f][2] << endl;
	}
	
	cout << endl << endl << endl << endl << endl;
	
	cout << "Vector TOTAL" << endl;
	cout << "  " << total[0] << "  " << total[1] << "  " << total[2] << endl;
}

//Estructura Principal de menu
int main(){	
	do{
		// Mostrar en Pantalla
		cout << "Programa Vector Curso" << endl;
		cout << "1. Ingresar datos a la matriz ALFA" << endl;
		cout << "2. Calculo de sumas de filas de la matriz" << endl;
		cout << "3. Mostrar la matriz ALFA y el vector TOTAL" << endl;
		cout << "4. Finalizar" << endl;
		cout << "Elija Una Opcion: "; cin >> op;
		cout << endl << endl;
		
		switch ( op ){
			case 1: 
				ingresoDatos();
				system ("cls");  // Limpieza de pantalla
				break; // Salir Switch
			case 2: 
				sumaTotal();
				cout << "Las operaciones se han realizado con exito" << endl;
				system ("pause");
				system ("cls"); // Limpieza de pantalla 
				break;
			case 3: 
				mostrarMatrizVector();
				getch(); 
				system ("cls"); // Limpieza de pantalla
				break;
			case 4: break;
			default: 
				cout << "\nEsta Opcion no esta disponible" << endl;
				system ("pause");
				system ("cls"); // Limpieza de pantalla
		}
	} while ( op != 4 ); 
}

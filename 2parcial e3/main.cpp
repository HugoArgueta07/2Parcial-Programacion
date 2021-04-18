// Hugo Andreé Argueta Rodas    0909-20-4492
// Serie 3.2 Segundo Parcial

//Declaración de Librerias
#include <iostream>
#include <conio.h>

using namespace std;

//Declaración de Variables
int vectorA[3], vectorB[3], vectorC[3];
float prom_C;
int point, sum_C;

//Estructura para Ingreso de datos del vector A
void ingresoDatosA(){
	for ( point = 0; point <= 2; point++ ){
		cout << "Ingrese el dato " << point + 1 << " del Vector A = "; 
		cin >> vectorA[point];
	}
}

//Estructura para Ingreso de datos del vector B
void ingresoDatosB(){
	for ( point = 0; point <= 2; point++ ){
		cout << "Ingrese el dato " << point + 1 << " del Vector B = "; 
		cin >> vectorB[point];
	}
}

//Estructura para Resta del vector A y B
void restaVector(){
	for ( point = 0; point <= 2; point++ ){
		vectorC[point] = vectorA[point] - vectorB[point];
	}
}

//Estructura para Ingreso del vector A
void promedioVectorC(){
	for ( point = 0; point <= 2; point++ ){
		sum_C += vectorC[point];
	}
	prom_C = sum_C / 3;
}

//Estructura Principal
int main(){	
	cout << "Programa para resta de Vectores" << endl << endl;
	ingresoDatosA();
	ingresoDatosB();
	restaVector(); 
	promedioVectorC();
		
	cout << endl;
	cout << "   Vector A" << endl;
	cout << "  " << vectorA [0] << "  " << vectorA [1] << "  " << vectorA [2] << endl << endl;
	
	cout << "   Vector B" << endl;
	cout << "  " << vectorB [0] << "  " << vectorB [1] << "  " << vectorB [2] << endl << endl;
	
	cout << "   Vector C" << endl;
	cout << "  " << vectorC [0] << "  " << vectorC [1] << "  " << vectorC [2] << endl << endl;
	
	cout << "\nPromedio del Vector C = " << prom_C;
	
	getch();
}

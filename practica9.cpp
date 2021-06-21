/*Este es la practica 9 sera una matriz ....*/
/*Eva Luna Álvarez Calderón zap363*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <locale.h>

using namespace std;

/*Este es un procedimiento que recibe variables, por eso puede ser void.*/
void imprimir (int** Matriz, int filas,  int columnas)
{
	/*Esto es para recorre la matriz para hacer la immpresion en cada posición*/
	for (int i = 0; i < filas; i++)
	{
		for (int i2 = 0; i2 < columnas; i2++)
		{

			cout << " " << Matriz[i][i2];


		}
		cout << endl;



	}
	


}



int main()
{
	setlocale(LC_ALL, "spanish");

	int filas;
	int columnas;

	cout << "Haber Camus de cuantas filas va a ser tu matriz?: " << endl;
	cout << "Por cierto Camus, Saga dice que elijas tu numero de las suerte. " << endl;
	cin >> filas;
	cout << "Ahora Camuchis dime de cuantas columnas quieres tu matriz " << endl;
	cout << "Por cierto Camus, El Caballero más cercano a Dios Shaka de Virgo, dice ingreses el numero que te pegue la gana. " << endl;
	cin >> columnas;

	/*Aqui se va a crear la matriz*/
	int** Matriz = new int* [filas];


	/*Ciclo para crear columnas*/

	for (int i = 0; i < filas; i++)
	{

		Matriz[i] = new int[columnas];


	}

	/*Asignar  un valor a la matriz*/
	for (int i = 0; i < filas; i++)
	{
		for (int i2 = 0; i2 < columnas; i2++)
		{


			cout << "Haber Milo, se util y ingresa un numero para la posicion [" << i << "][" << i2 << "]: " << endl;
			cout << "Recuerda Milo, Solo debes ingresar numeros enteros porfavor. " << endl << endl;
			cin >>Matriz[i][i2];



		}



	}

	/*Metodo para imprimir la matriz*/
	imprimir(Matriz, filas, columnas);

	delete[]Matriz;
	Matriz = NULL;
	cout << "Comprobación de que la matriz si fue borrada para ahorar memoria... beep beep beep " << Matriz << endl;
	return 0;




}
#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>
// test again
// test again again
// test again again again
using namespace std;
const int MAX_EST = 10;
void test_num(string pregunta, int *resp) // funcion para verificar que el numero introducido sea entero
{
	string input;	// almacena en una cadena lo que el usuario introduce
	int stringsize;	// variable para almacenar el tamaño de la cadena
	bool check;	// si es true la cadena solo tiene valores numericos, si es false la cadena tiene valores no validos
	for (;;)	// el ciclo es infinito hasta que el usuario introduzca valores validos
	{
		cout << pregunta;
		getline(cin, input);	// lee lo que usuario introduce y lo guarda como una cadena de caracteres
		stringsize = input.length();	// guarda el tamaño de la cadena que el usuario introduce
		for (int i = 0; i < stringsize; i++)	// revisa las letras de la cadena de una en una verificando que sean numeros
		{
			if (input[i] == '1' || input[i] == '2' || input[i] == '3' || input[i] == '4' || input[i] == '5' || input[i] == '6' || input[i] == '7' || input[i] == '8' || input[i] == '9' || input[i] == '0')
			{
				check = true;
			}
			else
			{
				check = false;
				break;
			}
		}
		if (check == true)
		{
			stringstream mystream(input);
			mystream >> *resp;
			break;
		}
		cout << "\tError! No es numero entero!\n";
	}
}
class GROUP_ES	// clase que almacena el grupo de estudiantes
{
private:
	int cest;	// cantidad de estudiantes en el grupo
	string nom[MAX_EST];
	string ape[MAX_EST];
	int nd;
	int nf;
public:
	void crear_grupo(int x)	// funcion para crear la lista de estudiantes en el grupo
	{
		cout << "\n\tGRUPO " << x + 1;
	ESTG:
		test_num(string("\n\tIntroduzca la cantidad de estudiantes en el grupo:\n\t(De 1 a 10 estudiantes)\n\t"), &cest);
		if (cest < 1 || cest > MAX_EST)
		{
			cout << "\tError! Cantidad de estudiantes no valida!\n";
			goto ESTG;	// Regresa a hacer la pregunta si el numero de estudiantes no esta en el rango correcto
		}
		system("cls");
		cout << "\t\tINTRODUCIENDO DATOS\n";
		cout << "\n\tGRUPO " << x + 1;
		for (int i = 0; i < cest; i++)
		{
			cout << "\n\tEstudiante " << i + 1 << "\n";
			cout << "\tNombre: ";
			getline(cin, nom[i]);
			cout << "\tApellido: ";
			getline(cin, ape[i]);
		}
	}
} G[12];
void main()
{
	int cg;	// cantidad de grupos de estudiantes;
	cout << "\t\tINTRODUCIENDO DATOS\n";
CANTG:
	test_num(string("\n\tIntroduzca la cantidad de grupos de estudiantes:\n\t(De 1 a 12 grupos)\n\t"), &cg);
	if (cg < 1 || cg > 12)
	{
		cout << "\tError! Cantidad de grupos no valida!\n";
		goto CANTG;	// Regresa a preguntar la cantidad de grupos si el numero introducido no esta en el rango correcto
	}
	for (int i = 0; i < cg; i++)
	{
		system("cls");
		cout << "\t\tINTRODUCIENDO DATOS\n";
		G[i].crear_grupo(i);
	}
	//Enoctest
	cout << "\n\t";
	system("pause");
}







// test account

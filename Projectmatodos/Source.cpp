#include<stdio.h>
#include<math.h>
#include<iostream>


double fila_1[3];
double fila_2[3];
double fila_3[3];

void Solicitar_datos();
void matarasakura();
int menu();


using namespace std;

int  main() {
	int m;
	
	m = menu();

	do {
	
		switch (m)
		{
		case 1: 
			Solicitar_datos();
			break;

		case 2:

			break;

		default 0:
		cout << "Intente de nuevo porfavor";
			break;
		}
	
	
	
	
	
		system("cls");
	} while (m != 3);
	
	system("pause"); 
	return 0;
}


void Solicitar_datos() {// solicitar los valores y la constante

 
     cout << "Sistema de solucion de metodo de Gauss Seidel\n";

	 
	 for (int i =0; i <= 3; i++)
	 {
		 cout << " Ingrese el valor de las variables ,x ,y ,z y la constante de la ecuacion 1\n"<< endl;
		 cin >> fila_1[i];	
		 system("cls");
	 }

	 for (int x = 0; x <= 3; x++)
	 {
		 cout << " Ingrese el valor de las variables ,x ,y ,z y la constante de la ecuacion 2 \n" << endl;
		 cin >> fila_2[x];
		 system("cls");
	 }
	 for (int j = 0; j <= 3; j++)
	 {
		 cout << " Ingrese el valor de las variables ,x ,y ,z y la constante de la ecuacion 3\n " << endl;
		 cin >> fila_3[j];
		 system("cls");
	 }
	

}

void matarasakura() {}

int menu() {
	cout << "Sistema de solucion de metodo de Gauss Seidel\n";

	int ind;
	cout<<" 1) Ingresa los datos de las ecuaciones\n";
	cout<<" 2) mostrar los resultados \n";
	cout<<" 3) salir \n";
	cin >> ind;
		
	//cout << setprecision(4);// para decidir cuntos dato se muestran al usuarion

	return ind;
}
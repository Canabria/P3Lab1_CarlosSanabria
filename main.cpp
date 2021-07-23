#include <iostream>
#include <math.h> //exp
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int op=0;
	while(op!=3) {
		cout<<"Bienvenidos al menu:"<<endl;
		cout<<"1.Ejercio 1"<<endl;
		cout<<"2.Ejercio 2"<<endl;
		cout<<"3.Salir del menu"<<endl;
		cout<<"Ingrese su opcion: "<<endl;
		cout<<"-->";
		cin>>op;
		switch(op) {
			case 1: {
				int n=0; //el valor para controlar el for
				cout<<"Bienvenidos a la Ejercio 1: "<<endl;
				cout<<"Ingrese n iteraciones: "<<endl;
				cout<<"-->";
				cin>>n;
				while(n<1) {
					cout<<"Error, n tiene que ser mayor que 1\n"<<"Porfavor ingrese el numero otra vez\n";
					cout<<"-->";
					cin>>n;
				}
				double suma=0;
				for(int i=1; i<=n; i++) {
					double num1=(2*i)-1;
					double num2=i*(i+1);
					suma=suma+(num1/num2);
					cout<<"S("<<i<<") = "<<suma<<endl;
				}//Fin del for
				cout<<"Saliendo del Ejercio 1"<<endl;
				break;
			}//fin del case 1
			case 2: {
				double x=0;//valor ingresado por el usuario
				cout<<"Bienvenidos a la Ejercio 2 "<<endl;
				cout<<"Ingrese el valor para x porfavor: "<<endl;
				cout<<"--->";
				cin>>x;
				double f=0;
				double n1=1;
				//expo es para calcular exponente lo hubiera puesto en n2 pero senti que el programa tal vez no me funcionaba si lo hacia
				double expo= exp(x);
				double n2=1+expo;
				f=n1/n2;
				cout<<"F("<<x<<") = "<<f<<endl;
				cout<<"Saliendo del Ejercio 2"<<endl;
				break;
			}//fin del case 2
			case 3: {
				//Este mensaje solo sirve para dar un salida
				cout<<"Saliendo del sistema gracias por ingresar :D"<<endl;
				break;
			}//fin del case 3
		}//fin del switch
	}//fin del while
	return 0;
}//fin del main

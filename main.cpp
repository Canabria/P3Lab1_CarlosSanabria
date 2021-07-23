#include <iostream>
#include <math.h> //exp
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int op=0;
	while(op!=3){
		cout<<"Bienvenidos al menu:"<<endl;
		cout<<"1.Ejercio 1"<<endl;
		cout<<"2. Ejercio 2"<<endl;
		cout<<"Ingrese su opcion: "<<endl;
		cout<<"-->";
		cin>>op;
		switch(op){
			case 1:{
				int n=0; //el valor para controlar el for 
				cout<<"Bienvenidos a la Ejercio 1: "<<endl;
				cout<<"Ingrese n iteraciones: "<<endl;
				cout<<"-->";
				cin>>n;
				double suma=0;
				for(int i=1;i<=n;i++){
					double num1=(2*i)-1;
					double num2=i*(i+1);
					suma=suma+(num1/num2);
					cout<<"S("<<i<<") = "<<suma<<endl;	
				}//Fin del for 
				cout<<"Saliendo del Ejercio 1"<<endl;
				break;
			}//fin el case 1
			case 2:{
				
				break;
			}case 3:{
				break;
			}
		}
	}
	return 0;
}

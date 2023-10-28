#include <iostream>
using namespace std;

void elementos(){
	int numero[20],n;
	int suma=0;
	
	cout<<"Ingrese la cantidad de dijitos a sumar "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Introduce el numero de la posicion "<<i<<":";
		cin>>numero[i];
	}
}

void suma(){
	int numero[20],n;
	int suma=0;

	for(int i =0; i<n;i++){
	suma = suma + numero[i];
	}
		cout<<"La suma de los dijitos es "<<suma<<endl;
}
	
	int main(){
	int op;
	do{
	elementos();
	suma();
	cout<<"Repetir todo presione 1 "<<endl;
	cin>>op;
	}while(op==1);


	}

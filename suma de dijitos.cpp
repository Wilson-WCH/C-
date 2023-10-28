//suma de dijitos
#include<iostream>
using namespace std;
int reducir(int num)
	{
	
	int a,entero;
	float residuo;
	a=0;
	do{
		entero=num/10;
		residuo=num%10;
		a=a+residuo;
		num=entero;
		cout<<" "<<num<<" + "<<a<<" = " ;			
	}while(num>=1);
	return a;
}
float valor()
{
	float num;
	cout<<"Ingrese  un dijito :"<<endl;
	cin>>num;
	return num;	
}
int main()
{
	float num,resultado;
	num=valor();
	resultado=reducir(num);
	cout<<endl;
	cout<<"El Dijito ingresado es : "<<num<<endl;
	cout<<"La suma de los dijitos  es :"<<resultado<<endl; 
}

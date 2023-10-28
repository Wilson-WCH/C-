#include<iostream>
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<windows.h>
//funciona en el dev por la libreria .en repelit no funciona
using namespace std;
struct nodo{
	char dato;
	nodo *s;
};
void apilar(char dato,nodo *&pila)
{
	nodo *nuevo_nodo=new nodo();
	nuevo_nodo->dato=dato;
	nuevo_nodo->s=pila;
	pila=nuevo_nodo;
}
void desapilar(char &n, nodo *&pila)
{
	nodo *aux=pila;
	n=aux->dato;
	pila=aux->s;
	delete aux;
}
bool cola_vacia(nodo *&salida)
{
	if(salida==NULL)
	return true;
	else
	return false;
}
void insertarCola(nodo *&salida, nodo *&entrada, char n)
{
	nodo *nuevo_nodo=new nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->s=NULL;
	if(cola_vacia(salida))
	{
		salida=nuevo_nodo;
	}
	else
	{
		entrada->s=nuevo_nodo;
	}
entrada=nuevo_nodo;
}
void sacarCola(nodo *&salida, nodo *&entrada,char &n)
{
	nodo *aux=salida;
	n=salida->dato;	
	if(entrada==salida)
	{
		salida=NULL;
		entrada=NULL;
	}
	else
	{
		salida=salida->s;
	}
	delete aux;
}
int main()
{
	system("color 0A");
	char palabra[30];
    int tamano,a;
    char n,n1;
    nodo*salida=NULL;
	nodo*entrada=NULL;
	nodo *pila=NULL;
	cout<<"*************************************"<<endl;
	cout<<"               BIENVENIDO            "<<endl;
	cout<<"*************************************"<<endl;
	cout<<" AVERIGUA SI TU PALABRA ES PALINDROMAO"<<endl;
	cout<<"_____________________________________"<<endl;
	cout<<" "<<endl;
    cout << "INGRESE UNA PALABRA:  " << endl;
    fflush(stdin);
    //gets(palabra);
    cin.getline(palabra,30);
    tamano=strlen(palabra);
    for(int i=0;i<tamano;i++)
    {
    	n=palabra[i];
    	apilar(n,pila);
    	insertarCola(salida,entrada,n);
	}
	for(int i=0;i<tamano;i++)
    {
    	desapilar(n,pila);
    	sacarCola(salida,entrada,n1);
    	if(n==n1)
    	a++;
	}
	if(a==tamano)
	cout<<"LA PALABRA INGRESADA POR EL USUARIO ES PALINDROMO"<<endl;
	else
	cout<<"LA PALABRA INGRESADA POR EL USUARIO NO ES PALINDROMO"<<endl;
return 0;
}

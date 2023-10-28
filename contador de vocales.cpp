#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	
	char frase[20];
	int a=0,e=0,i=0,o=0,u=0;
	cout<<"Ingrese una frase : ";
	cin.getline(frase,20,'\n');
	for(int j=0;j<20;j++)
	{
		switch(frase[j])
		{
			case 'a':
		
			a++;break;
			case 'e':
		
			e++;break;
			case 'i':
			
			i++;break;
			case 'o':
			
			o++;break;
			case 'u':
		
			u++;break;
		}
	

	}
	
	    cout<<"Vocal a : "<<a<<endl;
	    for(i=0;i<a;i++)
	    {
	    	cout<<"*";
		}
		cout<<endl;
		cout<<"Vocal e : "<<e<<endl;
		for(i=0;i<e;i++)
	    {
	    	cout<<"*";
		}
		cout<<endl;
		cout<<"Vocal i : "<<i<<endl;
		for(int n=0;n<i;n++)
	    {
	    	cout<<"*";
		}
		cout<<endl;
		cout<<"Vocal o : "<<o<<endl;
		for(i=0;i<o;i++)
	    {
	    	cout<<"*";
		}
		cout<<endl;
		cout<<"Vocal u : "<<u<<endl;
		for(i=0;i<u;i++)
	    {
	    	cout<<"*";
		}
		cout<<endl;
	getch();
	return 0;
}

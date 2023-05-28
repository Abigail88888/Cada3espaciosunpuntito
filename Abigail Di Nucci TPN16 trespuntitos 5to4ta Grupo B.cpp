#include<bits/stdc++.h>
using namespace std;
string CaracterTresDigitos(string caracter,string frase);
int main()
{	
    string palabra,caracter;
	cout<<"Ingrese un mensaje"<<endl;
    getline(cin,palabra);
    cout<<"Ingrese un caracter"<<endl;
    cin>>caracter;
    string c=CaracterTresDigitos(caracter,palabra);
	cout<<c<<endl;
	return 0;
}
string CaracterTresDigitos(string caracter,string palabra)
{
	string palabraconvertida; 
	int i;
	int contador=2;
	for(i=0; i<palabra.size(); i++)
	{
		palabraconvertida+=palabra[i];
		if(i==contador)
		{
			palabraconvertida+=caracter;
			contador=contador+3;
		}
	}
	return palabraconvertida;
}
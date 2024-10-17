#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int main(){
	string cadena;
	string palabra;
	cout<<"este programa es para buscar palabras"<<endl;
	cout<<"ingresa una cadena para luego buscar una palabra: ";
		getline(cin, cadena);
		cout<<"ingresa una palabra para buscar en tu cadena que pusiste: ";cin>>palabra;
		if (cadena.find(palabra) != string::npos){
			cout<<"la palabra se encuentra en la cadena";
		}else{
			cout<<"la palabra no se encuentra en la cadena";
		}
		return 0;
}


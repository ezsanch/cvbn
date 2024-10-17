#include <iostream>
using namespace std;
float kilobytes (float a);
float megabytes (float b);
float petabytes (float c);
int main(){
	int k;
	int m;
	int p;
	cout<<"ingrese la cantidad de bytes que quiera pasar a kilobyte: ";cin>>k;
	float resultado = kilobytes (k);
	cout<<"resultado de byte a kilobyte: "<<resultado<<endl;
	cout<<"ahora de terabytes a megabytes"<<endl;
	cout<<"ingrese la cantidad de terabytes que quiera pasar a megabytes: ";cin>>m;
	float resultado1 = megabytes (m);
	cout<<"resultado de terabyte a megabyte: "<<resultado1<<endl;
	cout<<"ahora de gigabytes a petabytes"<<endl;
	cout<<"ingrese la cantidad de gigabytes que quiera pasar a petabyres: ";cin>>p;
	float resultado2 = petabytes (p);
	cout<<"resultado de gigabytes a petabytes: "<<resultado2;
	
	

}
float kilobytes (float a)
{
	float kilobytes;
	kilobytes  = a/1024;
	return kilobytes;
}
float megabytes (float b)
{
	float megabytes;
	megabytes = b*1048;
	return megabytes;
}
float petabytes (float c)
{
	float petabytes;
	petabytes = c/1048;
	return petabytes;
}

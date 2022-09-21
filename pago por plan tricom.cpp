#include <iostream>
using namespace std;
int main()
{
	float cll,cm, cmll, csll, cme, ct;
	cout<<"Digite la cantidad de minutos consumidos durante el mes."<<endl;
	cin>>cmll;
	cout<<"Digite la cantidad de mensajes enviados durante el mes."<<endl;
	cin>>cme;
	
	csll= (60*cmll);
	cm=(cm*0.20);
	cll= (csll*0.15);
	ct= (cm+cll);
	
	cout<<"El monto total a pagar es "<<ct<<" pesos"<<endl;
	
	system ("pause");
	return 0;	
}

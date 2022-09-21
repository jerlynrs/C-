#include <iostream>
using namespace std;
int main()
{
	float ph, ch, vh, des, mp, d;
	cout<<"Ingrese la cantidad de horas trabajadas durante el mes. "<<endl;
	cin>>ch;
	cout<<"Ingrese el valor de las horas."<<endl;
	cin>>vh;
	cout<<"Digite el valor del descuento por motivos de ahorros "<<endl;
	cin>>d;
	
	ph=(ch*vh);
	
	des=((d/100)*ph);
	
	mp=(ph-des);
	
	cout<<"El descuento por concepto de ahorros es "<<des<<"pesos."<<endl;
	cout<"El monto total a pagar al profesor es "<<mp<<"pesos"<endl;
	
	system ("pause");
	return 0;
	
}

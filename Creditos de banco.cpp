#include <iostream>
using namespace std;
int main ()
{
	int mp, ce, co, cc, mont;
	cout<<"Ingrese el monto del presetamo."<<endl;
	cin>>mp;
	
	mont=((mp*0.24)+mp);
	cc=(mont/2);
	ce=(cc/4);
	co=(cc/20);
	
	cout<<"El monto total a pagar es de "<<mont<<" pesos"<<endl;
	cout<<endl;
	cout<<"El costo de sus pimeras 4 cuotas es : "<<ce<<" pesos"<<endl;
	cout<<endl;
	cout<<"Monto de las 20 cuotas restantes: "<<co<<endl;
	
	system ("pause");
	return 0;
}

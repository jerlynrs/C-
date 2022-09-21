#include <iostream>
using namespace std;
int main()

{
	float st, d, ss, ph, spf, ac, mpt;
	cout<<"Ingrese el sueldo del trabajador"<<endl;
	cin>>st;
	
	ph=(0.01*st);
	ss=(0.04*st);
	spf=(0.005*st);
	ac=(0.5*st);
	d=(ph+ss+spf+ac);
	mpt=(st-d);
	
	cout<<"se hicieron los siguentes descuentos"<<endl;
	cout<<ph<<" pesos por ley de politica"<<endl;
	cout<<ss<<" pesos por Seguro social"<<endl;
	cout<<spf<<" pesos por seguro paro forsozo"<<endl;
	cout<<ac<<" pesos por ahorro cooperativo"<<endl;
	cout<<"El monto a pagar al trabajador es "<<mpt<<endl;
	system ("pause");
	return 0;
	
}

#include <iostream>
using namespace std;
int main ()
{
	int in, mi, ps, mc, mcc;
	cout<<"Ingrese el presio del solar."<<endl;
	cin>>ps;
	cout<<"Ingrese el monto del incial."<<endl;
	cin>>mi;
	
	in=(ps-mi);
	mc=((in*0.20)+in);
	mcc= (mc/24);
	
	cout<<"Costo final del solar: "<<mc<<endl;
	cout<<"EL monto a pagar por 24 cuotas es de "<<mcc<< " pesos"<<endl;
	
	system ("pause");
	return 0;
	
}

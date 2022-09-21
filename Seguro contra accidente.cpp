#include <iostream>
using namespace std;
int main ()
{
	int sv, cp, p, mt;
	cout<<"Ingrese la cantidad de personas a asegurar. "<<endl;
	cin>>cp;
	
	p=(5000*cp);
	sv=((5000*cp)*0.05);
	mt=(p+sv);
	
	cout<<"Monto de la poliza : "<<p<<endl;
	cout<<"Monto del seguro de vida: "<<sv<<endl;
	cout<<endl;
	cout<<"Monto total a pagar: "<<mt<<endl;
	
	system ("pause");
	return 0;
}

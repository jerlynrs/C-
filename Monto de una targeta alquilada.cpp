#include <iostream>
using namespace std;
int main ()

{
	float mll, mi, mc, m, q;
	cout<<"Digite el monto de la targeta alquilada"<<endl;
	cin>>mi;
	cout<<"Digite la cantidad de minutos consumidos"<<endl;
	cin>>m;
	
	mc=(m*2.5);
	mll=(mi-mc);
	q=(mi-mll);
	
	cout<<"El monto de la llamada es "<<mll<<" Pesos"<<endl;
	cout<<"Aun le quedan "<<q<<" Pesos sin consumir"<<endl;
	
	
	system ("pause");
	return 0;
}

#include <iostream>
using namespace std;
int main()

{
	float cf, r,i, mt;
	cout<<"Ingrese la cantidad de fotos a revelar"<<endl;
	cin>>cf;
	
	r=(cf*15);
	i=(r*0.18);
	mt= (r+i);	
	cout<<"El monto a pagar por el revelado de las fotos es "<<mt<<" pesos "<<endl;
	system ("pause");
	return 0;
} 

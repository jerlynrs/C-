#include <iostream>
using namespace std;
int main()

{
	float ctrr, in,r, c;
	cout<<"Ingrese el costo del terreno"<<endl;
	cin>>ctrr;
	cout<<"Ingrese el monto del incial"<<endl;
	cin>>in;
	
	r=(ctrr-in);
	c=(r/24);
	
	cout<<"El precio final es de "<<r<<" pesos"<<endl;
	cout<<"El monto de cada cuota a 24 meses es de "<<c<<" pesos"<<endl;
	
	system ("pause");
	return 0;
}

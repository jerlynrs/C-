#include <iostream>
using namespace std;
int main()
{
	int md, d, i, in, mt, mtd;
	cout<<"Ingrese el monto total del deposito"<<endl;
	cin>>d;
	cout<<"Ingrese el monto del interes."<<endl;
	cin>>i;
	
	in=(i/100);
	md=(in*d);
	mtd=in+md;
	
	cout<<"El monto total a pagar mas interes: "<<mtd<<endl;
	
	system ("pause");
	return 0;
	
}

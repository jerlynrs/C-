#include <iostream>;
using namespace std;
int main ()
{
	float ck, mt, mtt, da;
	cout<<"Ingrese la cantidad de kilovatios consumidos en el mes"<<endl;
	cin>>ck;
	
	mt=(ck*2);
	da=(mt*0.10);
	mtt=(mt+da);
	
	cout<<"Se hizo un aumento por concepto de aseo de "<<da<<" $"<<endl;
	cout<<"EL monto total de la factura electrica es de "<<mtt<<endl;
	
	system ("pause");
	return 0;
}

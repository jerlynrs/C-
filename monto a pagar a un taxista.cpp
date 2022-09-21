#include <iostream>
using namespace std;
int main()

{
	int kmr,cpc, mr, cpmr, mtp; 
	cout<<"Digite la cantidad de kilometros recorridos"<<endl;
	cin>>kmr;
	cout<<"Ingrese la cantidad de minutos recorridos"<<endl;
	cin>>mr;
	
	cpc=(kmr*50);
	cpmr=(2*mr);
	mtp=(cpc+cpmr);
	
	cout<<"El monto a pagar por la carrera es "<<mtp<<" pesos"<<endl;
	
	system ("pause");
	return 0;
	
}

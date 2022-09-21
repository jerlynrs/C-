#include <iostream>
using namespace std;
int main ()
{
	float sueba, mvv, mf,aser, mfi, mvaca, tp;
	cout<<"Ingrese el sueldo base del trabajador"<<endl;
	cin>>sueba;
	cout<<"Ingrese el tiempo trabajado en anos"<<endl;
	cin>>aser;
	
	mf=((sueba/2)+sueba);
	mvaca= (sueba/30);
	mvv=(mvaca*7);
	mfi= (sueba*0.12);
	tp= (mf+mvv+mfi+sueba);
	
	cout<<"Bono de fin de ano: "<<mf<<endl;
	cout<<"Bono vacacionional: "<<mvv<<endl;
	cout<<"Bono de fideicomiso: "<<mfi<<endl;
	cout<<"El monto total a pagar al trabajador mas sueldo base: "<<tp<<endl;
	
	system ("pause");
	return 0;
}

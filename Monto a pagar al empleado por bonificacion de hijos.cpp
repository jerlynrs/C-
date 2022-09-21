#include <iostream>
using namespace std;
int main()
{
	int sb, ch,bon, monp;
	cout<<"Ingrese el sueldo base del empleado"<<endl;
	cin>>sb;
	cout<<"Ingresa la cantidad de hijos del empleado"<<endl;
	cin>>ch;
	
	bon= (800*ch);
	monp= bon+sb;
	
	cout<<"La bonificacion especial es de "<<bon<<" Pesos"<<endl;
	cout<<"El monto total a pagar al empleado es: "<<monp<<endl;
	
	system ("pause");
	return 0;
	
}

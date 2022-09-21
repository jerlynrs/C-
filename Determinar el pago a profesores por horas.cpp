#include <iostream>
using namespace std;
int main ()

{
	int pagop, desc, montot, choras, pxhoras;
	cout<<"Digite la cantidad de horas trabajadas"<<endl;
	cin>>choras;
	cout<<"Digite el monto por cada hora trabajada"<<endl;
	cin>>pxhoras;
	
	pagop= (choras*pxhoras);
	desc=(pagop*0.05);
	montot=(pagop-desc);
	
	cout<<"Se hizo un descuento por motivo de ahorros de:"<<desc<<endl;
	cout<<"El monto total a pagar al profesor es:"<<montot<<endl;
	
	system ("pause");
	return 0;
	
	}

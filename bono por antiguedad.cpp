#include <iostream>
using namespace std;
int main ()
{
	int bpa, pca, sb;
	cout<<"Ingrese el sueldo base del trabajador"<<endl;
	cin>>sb;
	cout<<"Ingrese la cantidad de anos trabajados"<<endl;
	cin>>pca;
	
	
	bpa= ((pca*1200)+2000+sb);
	
	cout<<"El monto total a pagar por el bono de antiguedad es de "<<bpa<<" pesos"<<endl;
	cout<<"mas un bono de 2000 pesos por el primer ano trabajado"<<endl;
	
	system ("pause");
	return 0;
}

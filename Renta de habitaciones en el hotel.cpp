#include <iostream>
using namespace std;
int main ()
{
	int cd, mcd, cp;
	cout<<"Ingrese la cantidad de dias en el hotel."<<endl;
	cin>>cd;
	cout<<"Ingrese la cantidad de habitaciones a rentar."<<endl;
	cin>>cp;
	
	mcd= (((cd*4000)+1000)*cp);
	
	cout<<"Monto total a pagar: "<<mcd<<endl;
	
	system ("pause");
	return 0;
}

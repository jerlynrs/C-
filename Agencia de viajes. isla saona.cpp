#include <iostream>
using namespace std;
int main()
{
	int tp, cost, cantp, in;
	cout<<"Ingrese la cantidad de personas que se hospedaran"<<endl;
	cin>>cantp;
	
	cost=(cantp*1200);
	in= (0.18*cost);
	tp= (cost+in);
	
	cout<<"Interes sumado de "<<in<<endl;
	cout<<"Monto total a pagar "<<tp<<endl;
	system ("pause");
	return 0;
}

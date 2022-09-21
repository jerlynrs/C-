#include <iostream>
using namespace std;
int main ()

{
	int volcono, radio, altura;
	cout<<"ingrese el valor del radio."<<endl;
	cin>>radio;
	cout<<"Ingrese el valor de la altura."<<endl;
	cin>>altura;
	
	volcono= (((1/3)*radio)*altura);
	
	cout<<"El volumen del cono es: "<<volcono<<endl;
	system ("pause");
	return 0;
}



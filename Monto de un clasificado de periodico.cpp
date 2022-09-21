#include <iostream>
using namespace std;
int main()
{
	int cc, cp, ccen, mott;
	cout<<"Ingrese la cantidad de palabras del clasificado."<<endl;
	cin>>cp;
	cout<<"Ingrese la cantidad de colores del clasificado."<<endl;
	cin>>cc;
	cout<<"Ingrese la cantiadad de centimetros incluidos."<<endl;
	cin>>ccen;
	
	mott= ((cp*5)+(cc*7)+(ccen*3));
	
	cout<<"El monto total a pagar por el clasificado es de "<<mott<<" Pesos"<<endl;
	
	system ("pause");
	return 0;
}

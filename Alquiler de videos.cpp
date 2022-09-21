#include <iostream>
using namespace std;
int main()
{
	int cd, cv, pv, p, pp, tp;
	cout<<"Alquiler de videos"<<endl;
	cout<<"Digite la cantidad de videos que alquilara"<<endl;
	cin>>cv;
	cout<<"Digite el precio de cada video video"<<endl;
	cin>>pv;
	cout<<"Digite la cantiadad de dias a alquilar."<<endl;
	cin>>cd;
	
	p=(pv*cv);
	tp=(100*cd);
	pp=(p+tp);
	
	cout<<"Monto a pagar "<<pp<<endl;
	
	system ("pause");
	return 0;
}

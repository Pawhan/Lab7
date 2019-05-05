#include<iostream>
#define M_PI  3.1415
using namespace std;
class Kolo
{
	public:
		double x;
		double y;
		double r;
		double Pole()
		{
			return M_PI*r*r;
		}
		Kolo(double promien=1,double xsowa=1,double ykowa=1)
		{
			r=promien;
			x=xsowa;
			y=ykowa;
		}
		void Dodaj()
		{
			cout<<"Podaj x  "<<endl;
			cin>>x;
			cout<<" Podaj y  "<<endl;
			cin>>y;
			int k=0;
			while(k==0)
			{
				cout<<" Podaj r  "<<endl;
				cin>>r;
				if(r>0)
					k++;
			}
		}
};
class Kula : public Kolo
{
	public:
	double z;
	double pr;
	double Pole_kuli()
	{
		return 4*M_PI*pr*pr;
	}
	Kula(double ztowa, double promien=1, double xsowa=1, double ykowa=1):Kolo(r,xsowa,ykowa)
	{
		z=ztowa;
		pr=promien;
	}
	Kula Plaszczyzna()
	{
		Kolo::Dodaj();
		cout<<"Pole kola "<<Kolo::Pole()<<endl;	
	}	
};
int main(void)
{
	Kula kula1(1,2,3,4);
	kula1.Plaszczyzna();
	cout<<"Pole kuli  "<<kula1.Pole_kuli()<<endl;
}

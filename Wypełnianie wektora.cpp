#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;
class Tablica
{
	public:
	vector<int> Wektor;
	void UniformFilm(int value = 0)
	{
		for(int i=0;i<5;i++)
		{
			Wektor.push_back(value);
		}
	}
	void wypisz()
	{
		for(int i =0; i<Wektor.size();i++)
		{
			cout<<Wektor[i]<<" ";
		}
	}
	void IncrementalFill(int start, int step=1)
	{
		Wektor.clear();
		for(start;start<10;start++)
		{
			Wektor.push_back(start);
		}
	}
	void RandomFill()
	{
		Wektor.clear();
		srand(time(NULL));
		for(int i=0;i<5;i++)
		{
			Wektor.push_back(rand()%50);
		}
	}
	void SuqaredFill(int a=1,int b=0)
	{
		Wektor.clear();
		for(int i=0;i<5;i++)
		{
			Wektor.push_back(a*i*i+b);
		}
	}
};
int main(void)
{
	Tablica t1;
	t1.UniformFilm();
	t1.wypisz();
	t1.IncrementalFill(5);
	cout<<endl;
	t1.wypisz();
	cout<<endl;
	t1.RandomFill();
	t1.wypisz();
	cout<<endl;
	t1.SuqaredFill();
	t1.wypisz();
	
}

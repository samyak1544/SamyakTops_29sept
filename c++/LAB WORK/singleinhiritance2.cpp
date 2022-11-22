#include<iostream>
using namespace std;

class C{
	public:
		int c;
		
		void getC(int x)
		{
			c = x;
		}
		void putC()
		{
			cout<<"\nC = "<<c;
		}
		
};
class D : public C{
	public:
		int d;
		
		void getD(int x)
		{
			d = x;
		}
		void putD()
		{
			cout<<"\nD = "<<d;
		}
		
};

int main()
{
	D obj4;
	int c,d;
	cout<<"Enter C & D : ";
	cin>>c>>d;
	obj4.getC(c);
	obj4.putC();
	obj4.getD(d);
	obj4.putD();
}
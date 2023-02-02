#include<iostream>
using namespace std;

class side{
	protected: 
	int l;
	
	public: 
	void getside(int s)
	{
		l = s;
	}
};

class square:public side{
	public:
		int sq(){
		return l*l;
		};
	
};

class cube:public side{
	public:
		int cu()
		{
			return l*l*l;
		}
};



int main()
{
	square obj1;
	obj1.getside(2);
	cout<<"\nsquare is : "<<obj1.sq();
	
	cube obj2;
	obj2.getside(3);
	cout<<"\ncube is :"<<obj2.cu();
	return 0;
}
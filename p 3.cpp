#include<iostream>
using namespace std;
class A
{
	public:
		

		void getdata()
		{
			cout<<"Class A";	
		}
};
class B
{		public :
		void putdata()
		{
			cout<<"Class B";
		}
};
class C : public B, public A
{
};
int main()
{
		cout<<"harvisha siddhapara"<<endl;
	cout<<"220130318055"<<endl;
	C c;
	c.getdata();
	c.putdata();
	
	return 0;
		
}

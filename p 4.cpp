//Write a C++ program to demonstrate order of constructor calls in Multiple Inheritance.
#include<iostream>
using namespace std;
class A 
{
	public :
	A(){
	cout<<"This is Class A :)"<<endl;
	}
};
class B
{
	public:
	
	B(){
	cout<<"This is Class B :)"<<endl;
	}
};

class C : public B, public A{};


int main()
{
	C c;
		cout<<"harvisha siddhapara"<<endl;
	cout<<"220130318055"<<endl;
	
	return 0;
}

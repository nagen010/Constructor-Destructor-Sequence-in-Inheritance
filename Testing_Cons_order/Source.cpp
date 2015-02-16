#include <iostream>

using namespace std;

struct A{
	A(){ cout << "A() C-tor" << endl; }
	~A(){ cout << "~A() D-tor" << endl; }
};

struct B : public A{
	B(){ cout << "B() C-tor" << endl; }
	~B(){ cout << "~B() D-tor" << endl; }

	A a;
};

int main(){
	// B b;
	A* a = new B();
	delete a;
	//B* b = new B(); 
	//delete b;
}
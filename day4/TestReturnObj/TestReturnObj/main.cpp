#include <iostream>
using namespace std;

class A
{
public:
	A()
	{
		cout << this << " constructor" << endl;
	}
	~A()
	{
		cout << this << " destructor" << endl;
	}
	A(const A & another)
	{
		cout << this << " copy from " << &another << endl;
	}
	A& operator=(const A & another)
	{
		cout << this << " operator =" << &another << endl;
		return *this;
	}
};

A & foo()
{
	A a;
	return a;
}

int main()
{
	A t = foo();
	return 0;
}


#if 0

A foo()
{
	//return A();
	A a;
	return a;
}

int main()
{
	A t;
	t = foo();
	getchar();
	return 0;
}



A foo()
{
	//return A();
	A a;
	return a;
}

int main()
{
	A t = foo();
	getchar();
	return 0;
}
#endif 

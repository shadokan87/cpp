#include<iostream>

class A
{
	public:
		A(int id);
		A();
		~A();
		void	virtual P();
	private:
		int id;
};

void	A::P()
{
	std::cout << id << std::endl;
}

A::A() : id(0)
{

}

A::A(int id)
{

}

A::~A()
{

}

class B : virtual public A {private: public: B() : id(2) {}; ~B();};

B::B() {}
B::~B() {}

int	main(void)
{
	A test;
	B test2;
	test.P();
	test2.P();
}

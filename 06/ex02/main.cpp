#include <iostream>
#include <cstdlib>
#include <exception>
class	Base {	public: virtual ~Base(void) {};Base(void) {}; };
class	A : public Base {};
class	B : public Base {};
class	C : public Base {};

Base	*generate(void)
{
	srand(time(NULL));
	int	randnum = 1 + rand() % 3;
	if (randnum == 1)
		return (new A);
	else if (randnum == 2)
		return (new B);
	else
		return (new C);
}

void	identify(Base *p)
{
	A *a = dynamic_cast<A*>(p);
	if (a != NULL)
	{
		std::cout << "A" << std::endl;
		return ;
	}
	B *b = dynamic_cast<B*>(p);
	if (b != NULL)
	{
		std::cout << "B" << std::endl;
		return ;
	}
	C *c = dynamic_cast<C*>(p);
	if (c != NULL)
	{
		std::cout << "C" << std::endl;
		return ;
	}
}

void	identify(Base &p)
{
	try{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (...){
		try{
			B &b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch (...){
			try{
				C &c = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch(...){

			}
		}
	}
}

int	main(void)
{
	Base *p = generate();
	identify(p);
	identify(*p);
}

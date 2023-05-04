#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
int main(void)
{
	Base	*test;
	D		*test2;
	A a;
	Base	&test1 = a;

	test = Base::generate();

	Base::identify(test);
	Base::identify(test2);
	Base::identify(&test1);


	// A	&test1 = Base::generate();
	// test1 = Base::generate();



	// Base::identify(Base::generate());
	return 0;
}
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
int main(void)
{
	A 		a;
	D		*test2;

	Base	*test;
	test = Base::generate();
	Base	&testRef = *test;

	Base::identify(a);//is type A
	Base::identify(test2);//D is not one of the tested types

	/*must be the same*/
	Base::identify(test);//randomly generated derived class
	Base::identify(&testRef);//a reference to test, which is of random type



	// Base::identify(Base::generate());


	return 0;
}
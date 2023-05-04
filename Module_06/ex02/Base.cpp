#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
// Base::Base()
// {
	
// }

// Base::Base(const Base &a)
// {
	
// }

Base::~Base()
{
	
}

// Base &Base::operator=(const Base& a)
// {
	
// }

Base *Base::generate(void)
{
	int i = 0;
	srand(time(NULL));
	int baseNum = (rand() % 3); 
	Base *genBase[3] = 
	{
		new A,
		new B,
		new C,
	};
	while (i < 3)
	{
		if (i == baseNum)
		{
			std::cout << "class type " << static_cast<char>('A' + i) << " generated" << std::endl;
			return (genBase[i]);
		}
		i++;
	}
	std::cout << "Error" << std::endl;
	exit(22);
}
/*
	Dynamic casting:
	You can use dynamic_cast operator to cast a pointer or reference
	to an object of a derived class to a pointer or reference to an object of its base class.
	If the cast is successful, the result is a pointer or reference to the base class sub-object of the derived class object,
	which can be used to determine the type of the derived class
*/

void Base::identify(Base *p)
{
	std::cout << "obj type: ";
	if (A *a = dynamic_cast<A*>(p))
	{
		std::cout << "A" << std::endl;
		return ;
	}
	else if (B *b = dynamic_cast<B*>(p))
	{
		std::cout << "B" << std::endl;
		return ;
	}
	else if (C *c = dynamic_cast<C*>(p))
	{
		std::cout << "C" << std::endl;
		return ;
	}
	else
	{
		std::cout << "None of the derived types" << std::endl;
		return ;
	}
}

void Base::identify(Base &p)
{
	std::cout << "obj type: ";
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (...)
	{
		try
		{
			B &b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
			return ;
		}
		catch (...)
		{
			try
			{
				C &c = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
				return ;
			}
			catch (...)
			{
				std::cout << "None of the derived types" << std::endl;
				return ;
			}
		}	
	}
}

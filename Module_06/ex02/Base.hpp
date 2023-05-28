
#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <exception>
#include <stdbool.h>
#include <time.h>



class Base
{
	private:
		// Base();
		// Base(const Base &a);
		// Base &operator= (const Base& a);
	public:
		virtual ~Base();
		static Base *generate(void);
		static void identify(Base *p);
		static void identify(Base &p);
};

class D : public Base {};//this is extra, used to test identifying 

#endif


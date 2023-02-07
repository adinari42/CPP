#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <iostream>
#include <cmath>

class Fixed
{
   private:
      int fixed_point_val;
      static const int fract_bit = 8;
   public:
      Fixed (void);
      Fixed (const int intNum);
      Fixed (const float floatNum);
      Fixed (const Fixed &a);
      ~Fixed();
      float toFloat( void ) const;
      int toInt( void ) const;
      //copy assignment operator overload.
      Fixed &operator=(const Fixed &a);
      friend std::ostream &operator<<(std::ostream& os, const Fixed &a);
      void setRawBits( int const raw );
      int getRawBits( void ) const;
      //destructor.
};

#endif
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
      bool operator==(const Fixed &n2);
      bool operator!=(const Fixed &n2);
      bool operator<(const Fixed &n2);
      bool operator>(const Fixed &n2);
      bool operator<=(const Fixed &n2);
      bool operator>=(const Fixed &n2);
      Fixed operator+(const Fixed &b);
      Fixed operator-(const Fixed &b);
      // Fixed operator*(const Fixed &a, const Fixed &b);
      Fixed operator*(const Fixed &b);
      Fixed operator/(const Fixed &b) const;
      Fixed &operator++(void);//pre increment operator
      Fixed operator++(int);//post increment operator
      Fixed &operator--(void);//pre decrement operator
      Fixed operator--(int);//post decrement operator
      static const Fixed &min(const Fixed &a, const Fixed &b);
      static Fixed &min(Fixed &a, Fixed &b);
      static const Fixed &max(const Fixed &a, const Fixed &b);
      static Fixed &max(Fixed &a, Fixed &b);
      void setRawBits( int const raw );
      int getRawBits( void ) const;
      //destructor.
};
std::ostream &operator<<(std::ostream& os, const Fixed &a);

#endif
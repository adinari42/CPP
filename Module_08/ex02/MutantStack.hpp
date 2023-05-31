#ifndef MUTANTSTACK_HPP
 #define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include <exception>
#include <stdbool.h>
#include <time.h>
#include <array>
#include <deque>
#include <stack>
#include <list>

template < typename T, class container=std::deque<T> >//The stack object inherits from the deque type like this Therefore it has also the deque iterator
class MutantStack : public std::stack<T>// MutantStack class inherit from the std::stack class that's itself inherits from the std::deque class
{
    public:
        MutantStack(){}
        ~MutantStack(){}
        MutantStack(const MutantStack &stack)
        {
            *this = stack;
        }
        typedef typename container::iterator iterator;
        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
};
/*The c in c.begin() and c.end() is a container_type defined in the stack class:

    public:
        typedef _Container                               container_type;
    protected:
        container_type c;
*/
 #endif
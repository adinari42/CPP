#ifndef EASYFIND_HPP
 #define EASYFIND_HPP

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


class NoOccurance : public std::exception {
        const char* what() const throw() {
            return "no occurance!";
    }
};

//value_type is defined by most standard containers to represent the type of elements stored in the container.
template<typename T>
typename T::iterator easyfind(T &container,const typename T::value_type &value) {
    typename T::iterator res;
    res = std::find(container.begin(), container.end(), value);
        if (res == container.end())
            throw NoOccurance();
    return res;
}


#endif
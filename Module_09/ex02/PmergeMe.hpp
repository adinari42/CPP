#ifndef PMERGEME_HPP
 #define PMERGEME_HPP

#include <fstream>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <iostream>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <exception>
#include <stdbool.h>
#include <time.h>
#include <array>
#include <deque>
#include <stack>
#include <list>
#include <limits.h>
#include <cfloat>
#include <cstdlib>
#include <cmath>

class PmergeMe
{
	private:
		PmergeMe();
		PmergeMe(const PmergeMe &a);
		PmergeMe &operator= (const PmergeMe& a);

    public:
		~PmergeMe();
		static void mergeSort(std::deque<int>& arr);
		static void mergeSort(std::list<int>& arr);
		static void merge(std::deque<int>& result, const std::deque<int>& left, const std::deque<int>& right);
		static void merge(std::list<int>& result, const std::list<int>& left, const std::list<int>& right);
		static int nthel(std::list<int> l, int n);
};

#endif
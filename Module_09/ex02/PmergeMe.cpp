#include "PmergeMe.hpp"

void PmergeMe::merge(std::deque<int>& result, const std::deque<int>& left, const std::deque<int>& right) {
    std::deque<int>::const_iterator leftIt = left.begin();
    std::deque<int>::const_iterator rightIt = right.begin();

    while (leftIt != left.end() && rightIt != right.end()) {//push the smallest element of left or right iter to original container
        if (*leftIt <= *rightIt) {
            result.push_back(*leftIt);
            ++leftIt;
        } else {
            result.push_back(*rightIt);
            ++rightIt;
        }
    }
    //push whatever is remaining from the stack if the other stack is empty (unlikely case)
    while (leftIt != left.end()) {
        result.push_back(*leftIt);
        ++leftIt;
    }
    while (rightIt != right.end()) {
        result.push_back(*rightIt);
        ++rightIt;
    }
}

void PmergeMe::mergeSort(std::deque<int>& arr) {
    if (arr.size() <= 1) {
        return;
    }
    std::deque<int> left, right;
    std::deque<int>::size_type middle = arr.size() / 2;
    for (std::deque<int>::size_type i = 0; i < middle; ++i) {// Split the array into two halves
        left.push_back(arr[i]);
    }
    for (std::deque<int>::size_type i = middle; i < arr.size(); ++i) {
        right.push_back(arr[i]);
    }
    mergeSort(left);
    mergeSort(right);
    arr.clear();    // Merge the sorted halves
    merge(arr, left, right);
}

void PmergeMe::merge(std::list<int>& result, const std::list<int>& left, const std::list<int>& right) {
    std::list<int>::const_iterator leftIt = left.begin();
    std::list<int>::const_iterator rightIt = right.begin();

    while (leftIt != left.end() && rightIt != right.end()) {
        if (*leftIt <= *rightIt) {
            result.push_back(*leftIt);
            ++leftIt;
        } else {
            result.push_back(*rightIt);
            ++rightIt;
        }
    }
    while (leftIt != left.end()) {   // Copy the remaining elements, if any
        result.push_back(*leftIt);
        ++leftIt;
    }
    while (rightIt != right.end()) {
        result.push_back(*rightIt);
        ++rightIt;
    }
}

int PmergeMe::nthel(std::list<int> l, int n)
{
	std::list<int>::iterator it;
	it = l.begin();
	while (n--)
		it++;
	return (*it);
}

void PmergeMe::mergeSort(std::list<int>& arr) {
    if (arr.size() <= 1) {
        return;
    }
    std::list<int> left, right;
    std::list<int>::size_type middle = arr.size() / 2;
    for (std::list<int>::size_type i = 0; i < middle; ++i) {// Split the array into two halves, first while loops pushes first half to left list
        left.push_back(nthel(arr, i));
    }
    for (std::list<int>::size_type i = middle; i < arr.size(); ++i) {//second while loop pushes second half to right list
        right.push_back(nthel(arr, i));
    }
    mergeSort(left); // Recursively re-split left and right until we get single elements
    mergeSort(right);
    arr.clear();    // clear and Merge the sorted halves
    merge(arr, left, right);
}

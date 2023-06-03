#include "PmergeMe.hpp"
#include <chrono>


template <typename T> void showCase (T &arr)
{
    int i = 0;//change i or remove condition to view more numbers
    for (typename T::iterator it = arr.begin(); it != arr.end(); ++it) {
        std::cout << *it << " ";
        if (i > 2)
        {
            std::cout << "[...]";
            break;
        }
        i++;
    }
    std::cout << std::endl;
}

int main(int argc, char **argv) {
	(void)argc;
	(void)argv;
    std::deque<int> numbers;
    std::list<int> numbers2;
	for (int i = 1; i < argc; i++)
	{
        try{
            char *ptr;
            double Number;
            Number = std::strtod(argv[i], &ptr);
            if (*ptr != '\0' || ptr == argv[i])
                throw std::invalid_argument("Error: Invalid argument! ");
            if (Number < 0)
                throw std::invalid_argument("Error: Negative argument! ");
            numbers.push_back(static_cast<int>(Number));
            numbers2.push_back(static_cast<int>(Number));

        }
        catch(std::invalid_argument &e)
        {
            std::cout << e.what() << argv[i] << std::endl;
            return (1);
        }
	}
    /*************************-deque test-*********************************/
    std::cout << "before: ";
    showCase(numbers);
	 std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();
    PmergeMe::mergeSort(numbers);
	std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
	long long duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
	std::cout << "Time to process a range of " << 5 << " elements with std::deque : " << duration << " ms" << std::endl;
    std::cout << "after: ";
    showCase(numbers);
    /*************************-deque test-*********************************/
    std::cout << "before: ";
    showCase(numbers2);
	start = std::chrono::high_resolution_clock::now();
    PmergeMe::mergeSort(numbers2);
	end = std::chrono::high_resolution_clock::now();
	duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();
	std::cout << "Time to process a range of " << 5 << " elements with std::list : " << duration << " ms" << std::endl;
    std::cout << "after: ";
    showCase(numbers2);

    return 0;
}

#include "ScalarConverter.hpp"
#include <iomanip>

int main(int argc, char **argv) {
 
    std::cout << "*-------------------------------------------------------------*\n";
    if (argc != 2)
    {
        std::cout << "error: incorrect parameters!" << std::endl;
        return (1);
    }
    std::cout << std::setprecision(1) << std::fixed;
    ScalarConverter::convert(argv[1]);   
 
    std::cout << "*-------------------------------------------------------------*\n";
    return 0;
}

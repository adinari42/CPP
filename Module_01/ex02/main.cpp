#include <iostream>

int	main()
{   
	std::string	str = "HI THIS IS BRAIN";
    std::string	*stringPTR = &str;
    std::string	&stringREF = str;

	std::cout << "\033[31mThe memory adress of the string variable >>\033[0m " << &str << std::endl;
	std::cout << "\033[31mThe memory adress held by stringPTR      >>\033[0m " << stringPTR << std::endl;
	std::cout << "\033[31mThe memory adress held by stringREF      >>\033[0m " << &stringREF << std::endl;

	std::cout << "\033[31mThe value of the string variable  $:\033[0m " << str << std::endl;
	std::cout << "\033[31mThe value pointed to by stringPTR $:\033[0m " << *stringPTR << std::endl;
	std::cout << "\033[31mThe value pointed to by stringREF $:\033[0m " << stringREF << std::endl;

    return (0);
}
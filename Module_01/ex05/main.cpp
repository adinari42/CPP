#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl annoy;

	if (argc != 2)
	{
		std::cout << "Error: incorrect number of arguments" << std::endl;
		return (1);
	}
	annoy.complain(argv[1]);
}
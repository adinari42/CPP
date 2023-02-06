#include "Zombie.hpp"


bool is_number(std::string s)
{
	int i = 0;

    while (s[i])
	{
		if (!std::isdigit(s[i]))
			return false;
		i++;
	}
    return true;
}

int	input_number(void)
{
	std::string		N;

	while (true)
	{
		std::cout << "input the number of zombies:" << std::endl;
		std::getline (std::cin, N);
		if (is_number(N))
			return(std::stoi(N));
	}
}

void announce_horde(Zombie *Horde, int N)
{
	int i = 0;

	while (i < N)
	{
		Horde[i].announce();
		i++;
	}
}

int	main(void)
{
	Zombie *Horde;
	int		N;
	std::string		zName;

	std::cout << "input the name of zombies:" << std::endl;
	std::getline (std::cin, zName);
	N = input_number();
	Horde = zombieHorde(N , zName);

	announce_horde(Horde, N);


	delete[] Horde;
	return (0);
}


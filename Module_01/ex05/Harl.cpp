#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "you're ugly, I would suggest a fix but it's impossible" << std::endl;
}
void Harl::info(void)
{
	std::cout << "what did the ocean say to the beach? nothing, it just waved" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "DONT CAUSE ANY ERRORS OR YOU WILL SUFFER THE CONSEQUENCES" << std::endl;
}
void Harl::error(void)
{
	std::cout << "you just reistablished the soviet union, are you happy now?" << std::endl;
}


void Harl::complain(std::string level)
{
	void (Harl::*complain_[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	compIndex[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4)
	{
		if (level == compIndex[i])
		{	
			(this->*complain_[i])();
			break;
		}
		i++;
	}
}
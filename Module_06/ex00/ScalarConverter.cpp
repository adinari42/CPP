#include	"ScalarConverter.hpp"

char ScalarConverter::charRes;
int ScalarConverter::intRes;
float ScalarConverter::floatRes;
double ScalarConverter::doubleRes;


//no need in providing implementation for constructors
//since they will never be used
ScalarConverter::ScalarConverter()
{
	
}

ScalarConverter::ScalarConverter(const ScalarConverter &a)
{
	
}

ScalarConverter::~ScalarConverter()
{
	
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter& a)
{
	return (*this);//just to shut off compiler warning
}

void ScalarConverter::convert(std::string literal_)
{
	try {
		intRes = std::stoi(literal_);
		if (intRes < CHAR_MIN || intRes > CHAR_MAX || isnan(intRes))
			std::cout << "char: impossible" << std::endl;
		else if (std::isprint(intRes))
		{
			charRes = static_cast<char>(intRes);
			std::cout << "char: '" << charRes << "'" << std::endl;
		}
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << intRes << std::endl;
		floatRes = std::stof(literal_);
		std::cout << "float: " << floatRes << "f" << std::endl;
		doubleRes = std::stod(literal_);
		std::cout << "double: " << doubleRes << std::endl;
	}
	catch (const std::invalid_argument&){
		try {
			floatRes = std::stof(literal_);
			if (floatRes < CHAR_MIN || floatRes > CHAR_MAX || isnan(floatRes))
				std::cout << "char: impossible" << std::endl;
			else if (std::isprint(static_cast<char>(floatRes)))
			{
				charRes = static_cast<char>(floatRes);
				std::cout << "char: '" << charRes << "'" << std::endl;
			}
			else
				std::cout << "char: Non displayable" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << floatRes << "f" << std::endl;
			doubleRes = std::stod(literal_);
			std::cout << "double: " << doubleRes << std::endl;
		}
		catch (const std::invalid_argument&){
			try {
				doubleRes = std::stod(literal_);
				if (doubleRes < CHAR_MIN || doubleRes > CHAR_MAX || isnan(doubleRes))
					std::cout << "char: impossible" << std::endl;
				else if (std::isprint(static_cast<char>(doubleRes)))
				{
					charRes = static_cast<char>(doubleRes);
					std::cout << "char: '" << charRes << "'" << std::endl;
				}
				else
					std::cout << "char: Non displayable" << std::endl;

				std::cout << "int: impossible" << std::endl;
				std::cout << "float: impossible" << std::endl;
				std::cout << "double: " << doubleRes << std::endl;
			}
			catch (const std::invalid_argument&){
				std::cout << "ERROR! " << literal_ << "does not represent a scalar value" << std::endl;
			}
			catch (const std::out_of_range&){
				std::cout << "ERROR! out of range" << std::endl;
			}
		}
		catch (const std::out_of_range&){
			std::cout << "ERROR! out of range" << std::endl;
		}
	}
	catch (const std::out_of_range&){
		std::cout << "ERROR! literal is out of range" << std::endl;
	}
}
// C++ Program to demonstrate
// copying the content of a .txt file

#include "losers.hpp"


std::string replace_occ(std::string s, std::string x, std::string y)
{
	size_t pos = 0;
	while (true)
	{
		pos = s.find(x, pos);
		if (pos == std::string::npos) {
			break;
		}

		s.erase(pos, x.length());
		s.insert(pos, y);
		pos += y.length();
	}
    return s;
}

int main(int argc, char **argv)
{

	if (argc != 4)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return (1); 
	}
    std::string		line;
    std::ifstream	ini_file (argv[1]);
	std::string		out_fd = argv[1];
    if (ini_file)
	{
  
    	std::ofstream	out_file (out_fd.append(".replace"));
		if (!out_file.write("write permission test", 0))
		{
			std::cout << "no write perm\n" << std::endl;
			ini_file.close();
			out_file.close();
			return(2);
		}
        while (getline(ini_file, line)) {
            out_file << replace_occ(line, argv[2], argv[3]) << "\n";
        }
        std::cout << "success! check the result inside : " << out_fd << std::endl;
		ini_file.close();
		out_file.close();
    }
    else {
        std::cout << "Error : Cannot read File" << std::endl;
		ini_file.close();
		return (1);
    }
    return (0);
}
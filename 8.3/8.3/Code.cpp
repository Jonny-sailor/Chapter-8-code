#include <iostream>
#include <string>
#include <cctype>

void UpF(std::string &str);

int main()
{
	std::string awesowe;
	while (awesowe != "777")
	{
		std::cout << "Please enter anything awesowe \n";
		std::cin >> awesowe;
		UpF(awesowe);
		std::cout << std::endl << awesowe <<std::endl;

	}

	std::cin.get();
}

void UpF(std::string &str)
{
	for (size_t i = 0; i < str.length();++i)
		str[i] = toupper(str[i]);
}
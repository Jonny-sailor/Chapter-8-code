#include <iostream>
#include <string>
void out(const std::string &add, int i = 0);

int main()
{
	std::string str = "Jonny Cash";
	out(str);
	out(str);
	out(str);
	out(str);
	out(str,1);

}

void out(const std::string &add, int i)
{
	static int counter = 0;

	if (i > 0)
	{
		for (int i = counter; i > 0; --i)
			std::cout << add << std::endl;
	}
	else
	{
		std::cout << add << std::endl;
		++counter;
	}
}
#include<iostream>
#include<string>
struct CandyBar
{
	std::string name;
	double weight;
	int kkal;
};

void fbar(CandyBar &cnd, char *rename = "Millenium Munch", double reweight = 2.85, int renrj = 350);

void view(const CandyBar &cnd);

int main()
{
	CandyBar cbox;
	
	fbar(cbox);
	view(cbox);

	std::cin.get();
}

void fbar(CandyBar &cnd, char *rename, double reweight, int renrj)
{
	cnd.name = rename;
	cnd.weight = reweight;
	cnd.kkal = renrj;
}

void view(const CandyBar &cnd)
{
	std::cout << cnd.name << std::endl << cnd.weight << std::endl << cnd.kkal << std::endl;
}
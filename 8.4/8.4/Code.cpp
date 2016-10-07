#include <iostream> 
using namespace std;

#include <string.h> // ��� strlen(), strcpy() 

struct stringy {
	char * str; // ��������� �� ������ 
    int ct; // ����� ������ (�� ������ ������� '\0') 
};
           
void set(stringy &smile, char arr[]);


void show(const stringy &smile, int rp = 1);
void show(const char test [], int rp = 1);



int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing); // ������ ���������� �������� ������, 
						 
	show(beany); // ������� ��������� ���� ��������� ���� ��� 
	show(beany, 2); // ������� ��������� ���� ��������� ��� ���� 
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing); // ������� ����� testing ���� ��� 
	show(testing, 3); // ������� ������ testing ��� ���� 
	show("Done!");

	std::cin.get();
	std::cin.get();
	std::cin.get();
	std::cin.get();


}

void show(const stringy &smile, int rp)
{
	if (rp == 1)
		std::cout << smile.str << std::endl;
	else
	{
		for (int i = rp; i > 0; --i)
			std::cout << smile.str << std::endl;
	}
}

void show(const char test[], int rp )
{
	if (rp == 1)
		std::cout << test << std::endl;
	else
	{
		for (int i = rp; i > 0; --i)
			std::cout << test << std::endl;
	}
}
void set(stringy &smile, char arr[])
{
	smile.ct = strlen(arr);
	smile.str = new char[smile.ct];
	strcpy_s(smile.str, smile.ct+1, arr);

}
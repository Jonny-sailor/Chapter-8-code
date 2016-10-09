// tempover.срр — перегрузка шаблонов 
#include <iostream> 
template <typename T> // шаблон А 
T SummArray(T arr[], int n);
template <typename T> // шаблон В 
T SummArray(T * arr[], int n);
struct debts
{
	char name[50];
	double amount;
};

int main()
{
	using namespace std;
	int things[6] = { 13, 31, 103, 301, 310, 130 };
	struct debts mr_E[3] =
	{
		{ "Ima Wolfe", 2400.0 },
		{ "Ura Foxe", 1300.0 },
		{ "Iby Stout", 1800.0 }
	};
	double * pd[3];
	// Установка указателей на члены amount структур в mr_E 
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;
	cout << "Listing Mr. E's counts of things :\n";
	// things - массив значений int 
	decltype (SummArray(things, 6)) out1 = SummArray(things, 6); // использует шаблон А 
	cout << out1 << endl;
	// pd - массив указателей на double 
	decltype (SummArray(pd, 3)) out2 = SummArray(pd, 3); // использует шаблон В (более специализированный) 
	cout << out2 << endl;
	
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
}
template <typename T>
T SummArray(T arr[], int n)
{
	using namespace std;
	T summ = 0;
	cout << "template A\n";
	for (int i = 0; i < n; i++)
		summ +=arr[i] ;
	return summ;
}	
template <typename T>
T SummArray(T * arr[], int n)
{
	using namespace std;
	T summ = 0;
	cout << "template B\n";
	for (int i = 0; i < n; i++)
		summ += *arr[i];
	return summ;
		
}
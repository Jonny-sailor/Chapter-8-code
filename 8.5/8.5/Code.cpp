//Шаблонная функция
#include <iostream>

template <class T>
T max5(T[5]);

int main()
{
	double arr_d[5]{ 1,2,3,4,5 };
	int arr_i[5]{ 6,7,8,9,10 };
	decltype (max5(arr_d)) view_d = max5(arr_d);
	decltype (max5(arr_i)) view_i = max5(arr_i);

	std::cout << view_d << std::endl << view_i << std::endl;

	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
}


template <class T>
T max5(T arr[5])
{
	T num = 0;
	for (int i = 0; i < 5;++i)
	{
		if (arr[i] > num)
		num = arr[i];
		
	}
	return num;
}
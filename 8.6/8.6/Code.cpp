#include <iostream>

template <class type_arr>
type_arr maxn(const type_arr *arr, const int i);

char* maxn(char *arr[], int size);

int main()
{
	const int size = 10;
	const int sizeof_char = 3;
	char *arr[sizeof_char] = { "Andy mutherfucker", "Jimmy goldy", "Set Gecko" };
	char *ch = maxn(arr,sizeof_char);
	std::cout << ch << std::endl;

	double mass[size]{ 1,2,3,4,5,6,7,8,9,0 };
    decltype (maxn(mass, size)) out = maxn(mass, size);
	std::cout << out << std::endl;

	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();

}

template <class type_arr>
type_arr maxn(const type_arr *arr, const int size)
{
	type_arr biggest = 0;
	for (int i = 0; i < size;++i)
	{
		if (arr[i] > biggest)
			biggest = arr[i];
	}
	return biggest;
}

char* maxn(char *arr[], int size)
{
	char *longest{"a"};

	for (int i = 0; i < size;++i)
	{
		if (std::strlen(arr[i]) > std::strlen(longest))
			longest = arr[i];
	}
	return longest;
}
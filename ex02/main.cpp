#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	std::srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = std::rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	for (int i = 0; i < 10; i++){
		std::cout << "mirror[" << i << "] = " << mirror[i] << "\t numbers[" << i
			<< "] = " << numbers[i] << std::endl;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
		for (int i = 0; i < 10; i++){
			std::cout << "test[" << i << "] = " << test[i] << "\t numbers[" << i
				<< "] = " << numbers[i] << std::endl;
		}
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " : test \"numbers[-2] = 0\"" <<'\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << " : test \"numbers[MAX_VAL] = 0\"" <<'\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = std::rand();
	}
	for (int i = 0; i < 10; i++){
		std::cout << "\t numbers[" << i
			<< "] = " << numbers[i] << std::endl;
	}
	delete [] mirror;//

	//for correction

	{
		Array<int>   t(0);
		std::cout << "on peut creer un array de taille 0\n";
	}


	return 0;
	}
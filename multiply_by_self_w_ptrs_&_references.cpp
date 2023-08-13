#include <iostream>




int main()
{

	while(true)
	{
	std::cout << "Hello!!!\n";
	std::cout << "Please enter a number you would like to be multiplied by itself!: ";
	int x{};
	std::cin >> x;

	int &ref{ x };
	int *ptr = &x;

	std::cout << *ptr * ref << std::endl;

}
	return 0;
}

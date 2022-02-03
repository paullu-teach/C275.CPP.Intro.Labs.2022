#include <iostream>

int main()
{
	int n1, n2, n3;
	float avg;

	std::cin >> n1 >> n2 >> n3;
	avg = ((n1+n2+n3)/3.0);	 // using float in denominator for float division
	std::cout << avg << std::endl;
	return 0;
}
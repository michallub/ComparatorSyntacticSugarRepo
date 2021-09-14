#include "../ComparatorSyntacticSugarProject/ComparatorSyntacticSugar.h"
#include <iostream>
int main()
{
	int x,y,z;
	std::cin >> x >> y >> z;
	if (CMP(0) <= x <= y <= z <= 1)		// !!!
		std::cout << "0 <= x <= y <= z <= 1 is true\n";
	else
		std::cout << "0 <= x <= y <= z <= 1 is false\n";
}
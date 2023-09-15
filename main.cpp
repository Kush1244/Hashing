#include <iostream>
#include <cmath>
#include <bitset>
#include <string>
#include "key_conversion.hpp"

int main()
{
	std::string s("Nothing can stop me I am all the way up");
	std::cout << string_to_integer(s) << std::endl;
	return 0;
}

#ifndef SECURE_HASHING_ALGORITHM_HPP
#define SECURE_HASHING_ALGORITHM_HPP

#include <bitset>
#include <iostream>

class sha_256
{
public:
	sha_256();
	std::bitset<256> operator()(std::string& msg);
private:
};

#endif // SECURE_HASHING_ALGORITHM_HPP

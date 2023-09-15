#ifndef HASH_FUNCTION_HPP
#define HASH_FUNCTION_HPP

#include <bitset>
#include <cmath>
#include <iostream> // to_remove

template<typename number = int>
number modulo_hash(number a, number D = 10000)
{
	return a % D;
}


template<typename number>
number mid_square(number n, number r = 16, number distanceFromZerothBit = 8)
{
	std::bitset<sizeof(number) * 8> mask((1 << r) - 1), num(n * n);
	mask = mask << distanceFromZerothBit;
	auto k = mask & num;
	k >>= distanceFromZerothBit;
	return k.to_ulong();
//	return std::bitset<sizeof(number) * 8>(n) & mask;
}

template<typename number>
number folding(number num, int part_len = 3)
{
	auto hashVal = 0ULL;
	uint32_t mod = std::pow(10, part_len);
	while(num >= mod)
	{
		hashVal += (num % mod);
		num /= mod;
	}
	return hashVal + num;
}

#endif // HASH_FUNCTION_HPP

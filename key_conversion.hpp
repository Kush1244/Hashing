#ifndef KEY_CONVERSION_HPP
#define KEY_CONVERSION_HPP

#include <iostream> // to_remove
#include <string>		 


uint32_t string_to_integer(std::string& s)
{
	auto len = s.length();
	uint32_t hashVal = 0;
	if((len & 1))
	{
		hashVal = s.at(len - 1);
		len--;
	}
	// now length is even
	for(auto i = 0; i < len; i += 2)
	{
		hashVal += s.at(i);
		hashVal += ((int)s.at(i + 1)) << 8;
	}
	return hashVal;
}


#endif // KEY_CONVERSION_HPP

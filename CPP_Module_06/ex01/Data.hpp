#ifndef DAT_HPP
#define DATA_HPP

#include <iostream>
#include <>

typedef struct Data
{
	int i;
	char a;
	std::string str;

};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);


#endif

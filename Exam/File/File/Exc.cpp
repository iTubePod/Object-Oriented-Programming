#include "Exc.h"

Exception::Exception(string name)
{
	Exception::setName(name);
}

void Exception::setName(string name)
{
	name = name;
}

string Exception::getName()
{
	return name;
}

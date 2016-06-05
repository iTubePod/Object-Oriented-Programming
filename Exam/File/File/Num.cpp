#include "Num.h"

Number::Number()
{
}

bool Number::isNum(string name)
{
	for (int i = 0; i < name.size(); i++)
	{
		if (name[1] == i)
		{
			return true;
		}
	}
	return false;
}


#include "Text.h"

Text::Text()
{
}

bool Text::isA(string name)
{
	if (name[0] == 'A')
	{
		cout << "Correcto, nombre empieza con A" << endl;
		return true;
	}
	else
	{
		cout << "ERROR" << endl;
		return false;
	}
}


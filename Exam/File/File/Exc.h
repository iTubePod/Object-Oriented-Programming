#include <iostream>
#include <string>

using namespace std;

class Exception {
	public:
		string name;
	Exception();
	void setName(string name);
	string getName();
};

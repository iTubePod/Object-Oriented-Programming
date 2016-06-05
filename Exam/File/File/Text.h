#include "Exc.h"

class Text :public Exception {
public:
	Text();
	bool isA(string name);
};
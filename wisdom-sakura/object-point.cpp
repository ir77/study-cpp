#include <iostream>
#include <String>
using namespace std;

class Kitty {
public:
	char *str;
} obj;

int main () {
	obj.str = "hoge";
	Kitty *po = &obj;
	po->str = "hogehogematsuri";

	cout << obj.str;
	return 0;
}

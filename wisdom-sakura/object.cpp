#include <iostream>
using namespace std;

class Kitty {
	public:
		int i;
		Kitty( int );
} ;

Kitty::Kitty(int i) {
	Kitty::i = i;
}

int main() {
	Kitty obj(10);
	Kitty obj2(7);
	cout << obj.i << '\n';

	obj = obj2;

	cout << obj.i;
	return 0;
}

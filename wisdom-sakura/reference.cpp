#include <iostream>
using namespace std;

int main() {
	int i = 100;
	int &ref = i; //reference

	ref++;

	cout << i << " : " << ref <<  '\n';
	cout << &i << " : " << &ref;

	return 0;
}

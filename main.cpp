#include <iostream>
#include <vector>
#include <algorithm>

class C {
public:
	int a;
	C(int a) {
		std::cout << "C constructor called" << std::endl;
		std::cout << a << std::endl;
	}
};

class CC {
	C c = C(10);
public:
	CC(int a)  {
		c.a = a;
		std::cout << "CC constructor called" << std::endl;
	}
};

int main() {
	CC cc(0);
}

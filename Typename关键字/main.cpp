#include <iostream>
template <typename T>
class A {
public:
	//	指定iterator为一种类型
	typename T::iterator* iter;
};

class B {
public:
	using iterator = int;
};

int main()
{
	A<B> a;
	std::cout << typeid(a.iter).name() << std::endl;
}
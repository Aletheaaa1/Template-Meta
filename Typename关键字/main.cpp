#include <iostream>
template <typename T>
class A {
public:
	//	ָ��iteratorΪһ������
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
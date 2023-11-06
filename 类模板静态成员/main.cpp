#include <iostream>
template <typename T>
class A
{
public:
	static int s;
	static T s2;
};

template<typename T>
int A<T>::s = 111;

//	特化
template<>
int A<float>::s = 20;

//	特化静态变量
template<>
float A<float>::s2 = 10.1f;

int main()
{
	std::cout << A<int>::s << std::endl;
	std::cout << A<float>::s << std::endl;
	std::cout << A<float>::s2 << std::endl;
}
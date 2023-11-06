#include <iostream>

template <typename T, int N>
class Math
{
public:
	T Sum(T a, T b, int N);
};

template<typename T, int N>
T Math<T, N>::Sum(T a, T b, int N)
{
	return a + b + N;
}

int main()
{
	Math<int, 5> math;
	std::cout << math.Sum(1, 2, 3) << std::endl;

	std::getchar();
}
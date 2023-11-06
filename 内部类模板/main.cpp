#include <iostream>

template<class T>
class Outer
{
public:
	template<class T>
	class Inner
	{
	public:
		T i;
		inline void Print() const;
	};
public:
	T o;
	inline void Print() const;
};

template <class T>
inline void Outer<T>::Print() const {
	std::cout << "Outer \n";
}

template <class T>
template <class T2>
void Outer<T>::Inner<T2>::Print() const
{
	std::cout << "Inner \n";
}

int main()
{
	Outer<int> o{ 1 };
	Outer<int>::Inner<float> i{ 1.2 };
}
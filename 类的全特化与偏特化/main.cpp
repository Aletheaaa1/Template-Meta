#include <iostream>

#pragma region 类全特化
template <typename T, typename U> class A
{
  public:
    T a1;
    U a2;

  public:
    void Print()
    {
        std::cout << "<T, U>" << std::endl;
    }
};

//	全特化
template <> class A<int, float>
{
  public:
    void Print()
    {
        std::cout << "<int, float>" << std::endl;
    }
};
#pragma endregion 类全特化

#pragma region 类偏特化
template <typename T, typename U> class B
{
  public:
    void Print()
    {
        std::cout << "<T, U> \n";
    }
};

template <typename T> class B<T, float>
{
  public:
    void Print()
    {
        std::cout << "<T, float> \n";
    }
};
#pragma endregion 类偏特化

#pragma region 函数全特化
template <typename T> void fun(T a)
{
    std::cout << "T" << std::endl;
}

//	全特化
template <> void fun(float a)
{
    std::cout << "float" << std::endl;
}
#pragma endregion 函数全特化

int main()
{
    //	普通模板类
    A<int, int> a;
    a.Print();
    //	类全特化
    A<int, float> a2;
    a2.Print();

    //	普通函数
    fun<int>(1);
    //	函数全特化
    fun<float>(1.0f);

    //	普通模板类
    B<int, int> b;
    b.Print();
    //	类偏特化
    B<int, float> b2;
    b2.Print();
}
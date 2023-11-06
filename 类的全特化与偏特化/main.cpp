#include <iostream>

#pragma region ��ȫ�ػ�
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

//	ȫ�ػ�
template <> class A<int, float>
{
  public:
    void Print()
    {
        std::cout << "<int, float>" << std::endl;
    }
};
#pragma endregion ��ȫ�ػ�

#pragma region ��ƫ�ػ�
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
#pragma endregion ��ƫ�ػ�

#pragma region ����ȫ�ػ�
template <typename T> void fun(T a)
{
    std::cout << "T" << std::endl;
}

//	ȫ�ػ�
template <> void fun(float a)
{
    std::cout << "float" << std::endl;
}
#pragma endregion ����ȫ�ػ�

int main()
{
    //	��ͨģ����
    A<int, int> a;
    a.Print();
    //	��ȫ�ػ�
    A<int, float> a2;
    a2.Print();

    //	��ͨ����
    fun<int>(1);
    //	����ȫ�ػ�
    fun<float>(1.0f);

    //	��ͨģ����
    B<int, int> b;
    b.Print();
    //	��ƫ�ػ�
    B<int, float> b2;
    b2.Print();
}
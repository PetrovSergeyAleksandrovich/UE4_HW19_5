#include <iostream>

template<class T, class N>
class A
{
private:
	T value;
	N another_value;
public:
	A() {}
	A(T _value, N _another_value) : value(_value), another_value(_another_value) {}

	void ShowValue()
	{
		std::cout << value << std::endl;
	}

	void SetValue(T newValue)
	{
		value = newValue;
	}
	void ShowAnotherValue()
	{
		std::cout << another_value << std::endl;
	}
	void SetAnotherValue(N newAnotherValue)
	{
		another_value = newAnotherValue;
	}
};

int main()
{
	A<double, int>* ptr = new A<double, int>(10.5, 6);
	ptr->ShowValue();
	ptr->ShowAnotherValue();
	ptr->SetValue(4.5);
	ptr->SetAnotherValue(11);
	ptr->ShowValue();
	ptr->ShowAnotherValue();
}
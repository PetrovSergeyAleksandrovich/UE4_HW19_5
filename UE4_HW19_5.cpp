#include <iostream>

class Animal
{
public:
	Animal() {}
	virtual void voice() {}
};

class Dog : public Animal
{
public:
	Dog() {}
	void voice() override
	{
		std::cout << "woof"<< std::endl;
	}
};

class Cat : public Animal
{
public:
	Cat() {}
	void voice() override
	{
		std::cout << "myau" << std::endl;
	}
};

class Rat : public Animal
{
public:
	Rat() {}
	void voice() override
	{
		std::cout << "shhh" << std::endl;
	}
};

int main()
{
	Animal* d = new Dog();
	Animal* c = new Cat();
	Animal* r = new Rat();

	Animal* array[3] = { d, c, r };

	for (int i = 0; i < 3; i++)
	{
		array[i]->voice();
	}


}

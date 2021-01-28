#include <iostream>

class Animal
{
public:
	Animal() {}
	virtual void voice()
	{
		std::cout << "animal says: " << std::endl;
	}

};

class Dog : Animal
{
public:

	void voice() override
	{
		std::cout << "woof"<< std::endl;
	}
};

class Cat : Animal
{
public:

	void voice() override
	{
		std::cout << "myau" << std::endl;
	}
};

class Cow : Animal
{
public:

	void voice() override
	{
		std::cout << "mouu" << std::endl;
	}
};


int main()
{
	Animal none;
	Dog* dog = new Dog();
	Cat* cat = new Cat();
	Cow* cow = new Cow();


}

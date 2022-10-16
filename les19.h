#pragma once

#include <iostream>

class Animal
{
protected:
	Animal() {}
public:
	virtual void Voice() {}

	virtual ~Animal() {};
};

class Cat : public Animal
{
	~Cat() override
	{
		std::cout << "\n remove Cat" << std::endl;
	}
public:
	void Voice() override
	{
		std::cout << "\n Cat say Myau!" << std::endl;
	}
};

class Dog : public Animal
{
	~Dog() override
	{
		std::cout << "\n remove Dog" << std::endl;
	}
public:
	void Voice() override
	{
		std::cout << "\n Dog say Woof!" << std::endl;
	}
};

class Fox : public Animal
{
	~Fox() override
	{
		std::cout << "\n remove Fox" << std::endl;
	}
public:
	void Voice() override
	{
		std::cout << "\n What Does the Fox Say?" << std::endl;
	}
};
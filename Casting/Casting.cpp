/**
    VFS Object Oriented Programming C++
    Purpose: Exercises in type casting

    @version 1.3 27/06/18
*/

//#include "stdafx.h"

#include <iostream>

//
// example classes you can use in the exercises below:
//

class Animal
{
public:
	virtual ~Animal() {};
};

class Mammal : public Animal
{
public:
	virtual ~Mammal() {};
};

class Human : public Mammal
{
public:
	virtual ~Human() {};
};

class Food
{
};

class Savoury : public Food
{
};

class Dessert : public Food
{
};

class Cake : public Dessert
{
};

//
// EXECISE ONE
//

//
// show an example of an implicit type conversion with an integral type
// show an example of an implicit type conversion with a pointer to a class
//

void ImplicitTypeConversion()
{
	short myShort = 2;
	int myInt = myShort;


	Human* person_ptr = new Human();
	Animal* animal_ptr = person_ptr;

	delete person_ptr;
	person_ptr = nullptr;
	animal_ptr = nullptr;
}

//
// EXECISE TWO
//

//
// show an example of a C style cast with an integral type
// show an example of a C style cast with a pointer to a class
//

void CStyleCast()
{
	float myFloat = 12.415;
	int myInt = (int)myFloat;

	Cake* myCake = new Cake();
	Dessert* myDessert = (Dessert*)myCake;

	delete myCake;
	myCake = nullptr;
	myDessert = nullptr;
}

//
// EXECISE THREE
//

//
// show an example of a static_cast using a pointer to a class
//

void StaticCast()
{
	Human* person_ptr = new Human();
	Animal* animal_ptr = static_cast<Human*>(person_ptr);

	delete person_ptr;
	person_ptr = nullptr;
	animal_ptr = nullptr;
}

//
// EXECISE FOUR
//

//
// show an example of when a dynamic_cast succeeds
// show an example of when a dynamic_cast fails
//

void DynamicCast()
{
	Human* person_ptr = new Human();
	Animal* animal_ptr;

	if (Animal* checkIfAnimal_ptr = dynamic_cast<Animal*>(person_ptr))
	{
		std::cout << "SUCCESSFULLY Casted Human to Animal" << std::endl;
		Animal* animal_ptr = dynamic_cast<Animal*>(person_ptr);
	}
	else 
	{
		std::cout << "FAILED to Cast Human to Animal" << std::endl;
	}

	Mammal* elephant_ptr = new Mammal();
	Human* anotherPerson_ptr;

	if (Human* checkIfHuman_ptr = dynamic_cast<Human*>(elephant_ptr))
	{
		std::cout << "SUCCESSFULLY Casted Elephant to Human" << std::endl;
		Human* anotherPerson_ptr = dynamic_cast<Human*>(elephant_ptr);
	}
	else 
	{
		std::cout << "FAILED to Cast Elephant to Human" << std::endl;
	}

	delete person_ptr;
	person_ptr = nullptr;
	animal_ptr = nullptr;
}

//
// EXECISE FIVE
//

//
// show an example of a reinterpret_cast
//

void ReinterpretCast()
{
	int myAscii = 65;
	char* myChar = reinterpret_cast<char*>(&myAscii);

	Human* person_ptr = new Human();
	char* myCastedChar = reinterpret_cast<char*>(&person_ptr);

	std::cout << myChar << std::endl;
	std::cout << myCastedChar << std::endl;

	delete person_ptr;
	person_ptr = nullptr;
}

int main()
{
	ImplicitTypeConversion();
	CStyleCast();
	StaticCast();
	DynamicCast();
	ReinterpretCast();

	return 0;
}
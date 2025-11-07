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
};

class Mammal : public Animal
{
};

class Human : public Mammal
{
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
	// solve here
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
	// solve here
}

//
// EXECISE THREE
//

//
// show an example of a static_cast using a pointer to a class
//

void StaticCast()
{
	// solve here
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
	// solve here
}

//
// EXECISE FIVE
//

//
// show an example of a reinterpret_cast
//

void ReinterpretCast()
{
	// solve here
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
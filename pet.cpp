#include "pch.h"
#include "pet.h"

#include <iostream>
using namespace std;
using namespace pet;
	void pet::Pet::print()
	{
		cout << "pet";
		
	}

	void pet::Dog::print()
	{
		cout << "dog" << index << ";" << id;
		try
		{			
			cout<<(index / id);
		}
		catch (int e)
		{
			cout << "error";
		}
	}
	void petTest() {
		Pet *pPet;
		Dog *pDog;
		pDog = new Dog;
		pDog->index = 1;
		pDog->id= 0;
		pPet = pDog;
		pPet->print();
	}
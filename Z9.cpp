#include <iostream>
#include "Dom9.h"

int main()
{
	setlocale(LC_ALL, "rus");
	Property* ar[7];
	for (int i = 0; i < 7; i++)
	{
		if (i < 3)
		{
			ar[i] = new Apartment(rand() % 10000 + 1000);
		}
		else if (i < 5) {
			ar[i] = new Car(rand() % 10000 + 1000);
		}
		else {
			ar[i] = new CountryHouse(rand() % 10000 + 1000);
		}

	}
	for (int i = 0; i < 7; i++) {
		ar[i]->nal();
		delete [] ar[i];
	}

}

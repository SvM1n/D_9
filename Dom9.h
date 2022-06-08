#ifndef DOM9_H
#define DOM9_H
#include <iostream>
class Property {
	protected:
		double worth;
	public:
		Property();
		Property(double n);
		virtual void nal() =0;
};

class Apartment : public Property {
public:
	Apartment() : Property() {};
	Apartment(double n);
	void nal();
};

class Car : public Property {
public:
	Car() : Property() {};
	Car(double n);
	void nal();
};

class CountryHouse : public Property {
public:
	CountryHouse() : Property() {};
	CountryHouse(double n);
	void nal();
};

#endif

#include "Dom9.h"

Property::Property() :worth(0) {};
Property::Property(double n) :worth(n) {};

Apartment::Apartment(double n) : Property(worth) {};
void Apartment::nal() {
	std::cout << "Налог на квартиру: " << worth / 1000;
}

Car::Car(double n) : Property(worth) {};
void Car::nal() {
	std::cout << "Налог на машину: " << worth / 200;
}

CountryHouse::CountryHouse(double n) : Property(worth) {};
void CountryHouse::nal() {
	std::cout << "Налог на дачу: " << worth / 500;
}
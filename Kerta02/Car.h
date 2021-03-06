#pragma once

#include <string>

class Car
{
private:
	std::string modelName;

	unsigned int tankSize;
	unsigned int gas;
	unsigned int speed;
public:
	Car(std::string modelName, 
		unsigned int tankSize);

	// estet��n kopiointi
	Car(const Car& car) = delete;

	void print();
	void brake();
	void accelerate();

	~Car();
};




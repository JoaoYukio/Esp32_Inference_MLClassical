#include <Arduino.h>

#include "RandomForestRegressor.h"

// Eloquent::ML::Port::RandomForestRegressor regressor;

double test_data[11][10] = {
	{-23, -22, -21, -21, -20, -19, -19, -18, -18, -18},
	{-22, -21, -21, -20, -19, -19, -18, -18, -18, -17},
	{-21, -21, -20, -19, -19, -18, -18, -18, -17, -17},
	{-21, -20, -19, -19, -18, -18, -18, -17, -17, -16},
	{-20, -19, -19, -18, -18, -18, -17, -17, -16, -16},
	{-19, -19, -18, -18, -18, -17, -17, -16, -16, -15},
	{-19, -18, -18, -18, -17, -17, -16, -16, -15, -14},
	{-18, -18, -18, -17, -17, -16, -16, -15, -14, -13},
	{-18, -18, -17, -17, -16, -16, -15, -14, -13, -12},
	{-18, -17, -17, -16, -16, -15, -14, -13, -12, -11},
	{-17, -17, -16, -16, -15, -14, -13, -12, -11, -10}};

void setup()
{
	double *res = new double[11];

	for (int i = 0; i < 11; i++)
	{
		// res[i] = regressor.predict(test_data[i]);
		res[i] = score(test_data[i]);
	}
	Serial.begin(115200);
	Serial.println("Hello World");
	// Print the result
	for (int i = 0; i < 11; i++)
	{
		Serial.println(res[i]);
	}
}

void loop()
{
	// put your main code here, to run repeatedly:
}

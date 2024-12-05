
#include "converter.h"
#include<iostream>

Converter::Converter() : Calculator() {}

void Converter::welcome() const
{
    std::cout << "\n\nEnter an operation (lengthconv., temperatureconv., weightconv.,change1, change2, setmem, printmem) or exit\n";
}

    /// Reuse code for all simple calc inputs
    /// If no simple calc match found it will continue below
void Converter::parseOperation(const std::string& input)
{
     Calculator::parseOperation(input);

    if (input == "lengthconv.")
    {
        convertLength();
    }
    else if (input == "temperatureconv.")
    {
        convertTemperature();
    }
    else if (input == "weightconv.")
    {
        convertWeight();
    }
}   

void Converter::convertLength()
{
    std::string fromUnit;
    std::cout << "Enter the unit you want to convert from: ";
    std::cin >> fromUnit;
    std::string toUnit;
    std::cout << "Enter the unit you want to convert to: ";
    std::cin >> toUnit;
    std::string value;
    std::cout <<"Enter the value:";
    std::cin>>value;
    // Implement the conversion logic for length
    // Example: Convert from meters to feet
    if (fromUnit == "m" && toUnit == "ft") {
        result = parseInput(value) * 3.28084;
    }
    // Add more conversion cases as needed
    // ...

    // Return the converted value
    std::cout <<"The result is" <<result<<std::endl;
}

void Converter::convertTemperature()
{
    std::string fromUnit;
    std::cout << "Enter the unit you want to convert from: ";
    std::cin >> fromUnit;
    std::string toUnit;
    std::cout << "Enter the unit you want to convert to: ";
    std::cin >> toUnit;
    std::string value;
    std::cout <<"Enter the value:";
    std::cin>>value;
    // Implement the conversion logic for temperature
    // Example: Convert from Celsius to Fahrenheit
    if (fromUnit == "C" && toUnit == "F") {
        result= (parseInput(value) * 9/5) + 32;
    }
    // Add more conversion cases as needed
    // ...

    // Return the converted value
    std::cout <<"The result is" <<result;
}

void Converter::convertWeight()
{
    // Implement the conversion logic for weight
    // Example: Convert from kilograms to pounds
    std::string fromUnit;
    std::cout << "Enter the unit you want to convert from: ";
    std::cin >> fromUnit;
    std::string toUnit;
    std::cout << "Enter the unit you want to convert to: ";
    std::cin >> toUnit;
    std::string value;
    std::cout <<"Enter the value:";
    std::cin>>value;

    if (fromUnit == "kg" && toUnit == "lb") {
        result = parseInput(value) * 2.20462;
    }
    // Add more conversion cases as needed
    // ...

    // Return the converted value
    std::cout <<"The result is" <<result;
}

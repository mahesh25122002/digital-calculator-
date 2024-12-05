
#ifndef CALCULATOR_H
#define CALCULATOR_H

#include<string>
#include<array>
#include<cmath>


class Calculator
{
    public: 
        Calculator();     // Constructor
        virtual ~Calculator()=default;  // Virtual destructor to prevent delete errors
        // declaring all the functions
        void add();
        void subtract();
        void multiply();
        void divide();
        void square();
        void sqrt();
        // Unit conversion functions
        // double convertLength(double value, const std::string& fromUnit, const std::string& toUnit);
        // double convertTemperature(double value, const std::string& fromUnit, const std::string& toUnit);
        // double convertWeight(double value, const std::string& fromUnit, const std::string& toUnit);

        void setMem();
        void printMem() const;  // const so that it doesn't alter the object's state

        // Parse input subs in number values when strings result or mem are entered
        double parseInput(const std::string&) const; 

        // provides data on user options, will be overloaded
        virtual void welcome() const;

        // parse input and decide which member func to call
        virtual void parseOperation(const std::string&);

        // derived class can access
        protected:
            double result;  // stores result
            double mem;  // stores mem;
};

#endif

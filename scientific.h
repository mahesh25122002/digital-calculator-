
#ifndef SCIENTIFIC_H
#define SCIENTIFIC_H

#include<string>
#include <array>
#include <cmath>
#include "calculator.h"

// derived form Calculator class
class Scientific : public Calculator
{
    public:
        Scientific();   // constructor
        virtual ~Scientific()=default;  // virtual destructor to prevent delete errors
        virtual void welcome() const override;  // options message
        virtual void parseOperation(const std::string& input) override;  // parse operation input and call correct member function
        // some extra opertaion other than that in calculator
        void sin();
        void cos();
        void tan();
        void ln();
        void log();
        void abs();
        void pow();
};

#endif


#ifndef CONVERTER_H
#define CONVERTER_H

#include <string>
#include "calculator.h"

class Converter  : public Calculator
{
public:
    Converter();
    virtual ~Converter()=default;
    virtual void welcome() const override;
    virtual void parseOperation(const std::string& input) override;
    void convertLength();
    void convertTemperature();
    void convertWeight();
};

#endif

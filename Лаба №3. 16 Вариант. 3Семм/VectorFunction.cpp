#include "VectorFunction.h"

VectorFunction::VectorFunction()
{
    this->OurRes = INT_MIN;
    this->DimensionVectorSpace = 3;
}

double& VectorFunction::get_result()
{
    return this->OurRes;
}

void VectorFunction::set_result(double res)
{
    this->OurRes = res;
}

void VectorFunction::calc_result()
{
    std::cout << this;
}

void VectorFunction::set_DimensionVectorSpace(uint8_t Dim)
{
    this->DimensionVectorSpace = Dim;
}

uint8_t& VectorFunction::get_DimensionVectorSpace()
{
    return this->DimensionVectorSpace;
}

std::ostream& operator<<(std::ostream& OutStream, VectorFunction& OurObj)
{
    OutStream << "Override that for child class \n";
    return OutStream;
}

std::istream& operator>>(std::istream& InputStream, VectorFunction& OurObj)
{
    std::cout << "Override that for child class \n";
    return InputStream;
}

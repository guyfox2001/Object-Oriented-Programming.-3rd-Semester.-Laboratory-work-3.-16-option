#pragma once
#include <iostream>
#include <cmath>


 class VectorFunction
{
public:
	VectorFunction();
	double& get_result();
	void set_result(double res);
	void calc_result();
	void set_DimensionVectorSpace(uint8_t Dim);
	uint8_t& get_DimensionVectorSpace();
	friend std::ostream& operator<<(std::ostream& OutStream, VectorFunction& OurObj);
	friend std::istream& operator>>(std::istream& InputStream, VectorFunction& OurObj);
private:
	double OurRes;
	uint8_t DimensionVectorSpace;

};


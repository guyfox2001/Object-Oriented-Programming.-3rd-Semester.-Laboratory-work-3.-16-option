#include "FirstVectorFuction.h"

FirstVectorFuction::FirstVectorFuction()
{
	this->OurVector = nullptr;
}

FirstVectorFuction::FirstVectorFuction(uint8_t Dim)
{
	try {
		if (Dim > 0) {
			this->set_DimensionVectorSpace(Dim);
			this->OurVector = new ParamsForFirstVectorFunction[Dim];
		}
		else {
			throw "Ex�eption! DimensionVectorSpace can't be less 0\n";
		}
	}
	catch (const char* Ex�eptionString) {
		std::cout << Ex�eptionString;
	}
}

FirstVectorFuction::~FirstVectorFuction()
{
	if (this->OurVector == nullptr) {
		return;
	}
	else {
		delete[] this->OurVector;
	}
}

void FirstVectorFuction::calc_result()
{
	try {
		if (OurVector != nullptr) {
			for (int cnt = 0; cnt < this->get_DimensionVectorSpace(); cnt++) {
				this->set_result(this->get_result() + (OurVector[cnt].a / OurVector[cnt].x + OurVector[cnt].b) * OurVector[cnt].base_vector);
			}
		}
		else {
			throw "Exception! Vector not initialized";
		}
	}
	catch (const char* Ex�eptionString) {
		std::cout << Ex�eptionString;
	}
}

ParamsForFirstVectorFunction* FirstVectorFuction::get_vector()
{
	return this->OurVector;
}

void FirstVectorFuction::set_vector(ParamsForFirstVectorFunction* NewVector)
{
	this->OurVector = NewVector;
}

void FirstVectorFuction::resize(uint8_t size)
{
	this->~FirstVectorFuction();
	this->OurVector = new ParamsForFirstVectorFunction[size];
	this->set_DimensionVectorSpace(size);

}


std::ostream& operator<<(std::ostream& OutStream, FirstVectorFuction& OurObj)
{
	try {
		if (OurObj.OurVector != nullptr) {
			OutStream << "Our function is a/x + b\n";
			OutStream << "Our DimensionVectorSpace" << OurObj.get_DimensionVectorSpace() << '\n';
			if (OurObj.get_result() != INT_MIN) {
				OutStream << "Our value of Vector Function " << OurObj.get_result() << '\n';
			}
			else {
				OutStream << "Our value of Vector Function N\\A \n";
			}
			OutStream << "Our vector with params: X , A , B, BaseVector\n";
			for (int i = 0; i < OurObj.get_DimensionVectorSpace(); i++) {
				OutStream << i << ':' << OurObj.OurVector[i].x << ' ' << OurObj.OurVector[i].a << ' ' << OurObj.OurVector[i].b << ' ' << OurObj.OurVector[i].base_vector << '\n';
			}
		}
		else {

		}
	}
	catch (const char* Exceptionstring) {
		std::cout << Exceptionstring;
	}
	return OutStream;
}

std::istream& operator>>(std::istream& InputStream, FirstVectorFuction& OurObj)
{
	if (OurObj.OurVector == nullptr) {
		std::cout << "Vector not initialized. Please input DimensionVectorSpace \n";
		InputStream >> OurObj.get_DimensionVectorSpace();
		OurObj.resize(OurObj.get_DimensionVectorSpace());
	}
	std::cout << "Input Params \n";
	for (int i = 0; i < OurObj.get_DimensionVectorSpace(); i++) {
		std::cout << "Input X" << i << '\n';
		InputStream >> OurObj.OurVector[i].x;
		std::cout << "Input A" << i << '\n';
		InputStream >> OurObj.OurVector[i].a;
		std::cout << "Input B" << i << '\n';
		InputStream >> OurObj.OurVector[i].b;
		std::cout << "Input BaseVector" << '\n';
		InputStream >> OurObj.OurVector[i].base_vector;
	}
	return InputStream;
}


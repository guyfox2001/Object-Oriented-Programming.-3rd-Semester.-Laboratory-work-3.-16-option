#include "VectorFunction.h"

struct ParamsForSecondVectorFunction
{
	double x = 1, a = 1, b = 1, c =1, base_vector = 1; // »кс посто€нный

};

class SecondVectorFunction : public VectorFunction {
public:
	SecondVectorFunction();
	SecondVectorFunction(uint8_t Dim);
	~SecondVectorFunction();
	void calc_result();
	ParamsForSecondVectorFunction* get_vector();
	void set_vector(ParamsForSecondVectorFunction* NewVector);
	void resize(uint8_t size);
	friend std::ostream& operator<< (std::ostream& OutStream, SecondVectorFunction& OurObj);
	friend std::istream& operator>> (std::istream& InputStream, SecondVectorFunction& OurObj);
private:
	ParamsForSecondVectorFunction* OurVector = nullptr;
};
#include "VectorFunction.h"

struct ParamsForFirstVectorFunction
{
	double x = 1, a = 1, b = 1, c =1, base_vector = 1; // »кс посто€нный

};

class SecondVectorFuction : public VectorFunction {
public:
	SecondVectorFuction();
	SecondVectorFuction(uint8_t Dim);
	~SecondVectorFuction();
	void calc_result();
	ParamsForFirstVectorFunction* get_vector();
	void set_vector(ParamsForFirstVectorFunction* NewVector);
	void resize(uint8_t size);
	friend std::ostream& operator<< (std::ostream& OutStream, SecondVectorFuction& OurObj);
	friend std::istream& operator>> (std::istream& InputStream, SecondVectorFuction& OurObj);
private:
	ParamsForFirstVectorFunction* OurVector = nullptr;
};
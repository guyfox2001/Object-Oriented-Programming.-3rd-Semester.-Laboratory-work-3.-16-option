#include "VectorFunction.h"

struct ParamsForFirstVectorFunction
{
	double x = 1, a = 1, b =1, base_vector= 1; // »кс посто€нный
	
};

class FirstVectorFunction : public VectorFunction {
public:
	FirstVectorFunction();
	FirstVectorFunction(uint8_t Dim);
	~FirstVectorFunction();
	void calc_result();
	ParamsForFirstVectorFunction* get_vector();
	void set_vector(ParamsForFirstVectorFunction* NewVector);
	void resize(uint8_t size);
	friend std::ostream& operator<< (std::ostream& OutStream  , FirstVectorFunction& OurObj);
	friend std::istream& operator>> (std::istream& InputStream, FirstVectorFunction& OurObj);
private:
	ParamsForFirstVectorFunction* OurVector = nullptr;
};
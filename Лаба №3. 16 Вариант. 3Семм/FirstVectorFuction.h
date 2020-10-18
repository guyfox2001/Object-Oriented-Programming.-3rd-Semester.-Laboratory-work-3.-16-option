#include "VectorFunction.h"

struct ParamsForFirstVectorFunction
{
	double x = 1, a = 1, b =1, base_vector= 1; // »кс посто€нный
	
};

class FirstVectorFuction : public VectorFunction {
public:
	FirstVectorFuction();
	FirstVectorFuction(uint8_t Dim);
	~FirstVectorFuction();
	void calc_result();
	ParamsForFirstVectorFunction* get_vector();
	void set_vector(ParamsForFirstVectorFunction* NewVector);
	void resize(uint8_t size);
	friend std::ostream& operator<< (std::ostream& OutStream  , FirstVectorFuction& OurObj);
	friend std::istream& operator>> (std::istream& InputStream, FirstVectorFuction& OurObj);
private:
	ParamsForFirstVectorFunction* OurVector = nullptr;
};
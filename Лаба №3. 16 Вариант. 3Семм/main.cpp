#include "FirstVectorFunction.h"
#include "SecondVectorFunction.h"
#include <iomanip>
using namespace std; 

int main() {
	FirstVectorFunction First;
	SecondVectorFunction Second;
	int size_first, size_second;
	cout << First;
	cout << Second;

	cout << "Input the First vector size\n";
	cin >> size_first;
	cout << "Input the second vector size\n";
	cin >> size_second;

	First.resize(size_first);
	Second.resize(size_second);

	cout << First;
	cout << Second;

	cin >> First;
	cin >> Second;

	First.calc_result();
	Second.calc_result();

	cout << fixed;
	cout << "First Result\n" ;
	cout << First.get_result() << '\n';
	cout << "Second Result\n";
	cout << Second.get_result() << '\n';

	return 0;
}
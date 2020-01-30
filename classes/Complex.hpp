#ifndef Complex_hpp
#define Complex_hpp

#include <iostream>
using namespace std;

namespace mathematics {

class Complex {
private:
	double real;
	double imaginary;
public:
	Complex();
	Complex(double, double);
	Complex(const Complex &);
	const Complex &operator=(const Complex &);
	
	double getReal() const;
	double getImaginary() const;
	
	bool operator==(const Complex &) const;
	bool operator!=(const Complex &) const;
};/* class Complex */

ostream &operator<<(ostream &out, const Complex &c);
Complex operator+(const Complex &, const Complex &);
Complex operator+(const Complex &, const double);
Complex operator+(const double, const Complex &);

} /* namespace mathematics */

#endif /* Complex_hpp */

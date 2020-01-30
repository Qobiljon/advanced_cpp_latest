#include "Complex.hpp"

namespace mathematics {

ostream &operator<<(ostream &out, const Complex &c) {
	out << '(' << c.getReal() << "+" << c.getImaginary() << "i)";
	return out;
}

Complex operator+(const Complex &left, const Complex &right) {
	return Complex(left.getReal() + right.getReal(), left.getImaginary() + right.getImaginary());
}

Complex operator+(const Complex &left, const double value) {
	return Complex(left.getReal() + value, left.getImaginary());
}
	
Complex operator+(const double value, const Complex &right) {
	return Complex(right.getReal() + value, right.getImaginary());
}

bool Complex::operator==(const Complex &other) const {
	return real == other.real && imaginary == other.imaginary;
}

bool Complex::operator!=(const Complex &other) const {
	return real != other.real || imaginary != other.imaginary;
}


Complex::Complex() : real(0), imaginary(0) {

}

Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary) {
	
}

Complex::Complex(const Complex &right) {
	cout << "copy" << endl;
}

const Complex &Complex::operator=(const Complex &other) {
	real = other.real;
	imaginary = other.imaginary;
	cout << "assignment" << endl;
	return *this;
}

double Complex::getReal() const {
	return real;
}

double Complex::getImaginary() const {
	return imaginary;
}

} /* namespace mathematics */

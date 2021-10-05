#include <iostream>
#include <cmath>

#include "Complex.h"

Complex::Complex(double re, double im) {
    this->re = re;
    this->im = im;
}

Complex::Complex() = default;
Complex::~Complex() = default;

void Complex::print() const {
    if(im >= 0) std::cout << this->re << " + " << this->im << "i" << std::endl;
    else std::cout << this->re << " - " << -this->im << "i" << std::endl;

}

Complex::Complex(const Complex& n) {
    this->re = n.re;
    this->im = n.im;
}

Complex Complex::operator+(const Complex &a) const {
    return Complex(this->re + a.re, this->im + a.im);
}

Complex Complex::operator-(const Complex &a) const {
    return Complex(this->re - a.re, this->im - a.im);
}

Complex Complex::operator-() const {
    return Complex(-this->re, -this->im);
}

Complex Complex::operator+() const {
    return Complex(this->re, this->im);
}

Complex Complex::operator*(const Complex &a) const {
    return Complex(this->re*a.re + this->im*a.im, this->im*a.re + this->re*a.im);
}

bool Complex::operator==(const Complex &a) const {
    if(this->im == a.im and this->re == a.im) return true;
    else return false;
}

bool Complex::operator!=(const Complex &a) const {
    if(this->im != a.im or this->re != a.im) return true;
    else return false;
}

double Complex::abs() const{
    return sqrt((this->re) * (this->re) + (this->im) * (this->im));
}

Complex& Complex::operator=(const Complex &a) = default;

Complex Complex::operator+(const double &a) const {
    return Complex(this->re + a, this->im);
}

Complex Complex::operator*(const double &a) const {
    return Complex(this->re * a, this->im * a);
}

Complex Complex::operator/(const Complex &a) const {
    double Re = ((re * a.re + im * a.im) / (a.im * a.im + a.re * a.re));
    double Im = ((a.re * im - re * a.im) / (a.im * a.im + a.re * a.re));
    return Complex(Re, Im);
}

Complex Complex::operator/(const double &a) const {
    return Complex(this->re / a, this->im / a);
}

Complex Complex::operator-(const double &a) const {
    return Complex(re - a, im);
}

Complex& Complex::operator+=(const Complex& a) {
    this->re += a.re;
    this->im += a.im;
    return *this;
}

Complex &Complex::operator-=(const Complex& a) {
    this->re -= a.re;
    this->im -= a.im;
    return *this;
}

Complex &Complex::operator*=(const Complex& a) {
    *this = Complex(*this * a);
    return *this;
}

Complex &Complex::operator/=(const Complex& a)
{
    double Re = re;
    double Im = im;
    re = (Re * a.re + Im * a.im) / (a.im * a.im + a.re * a.re);
    im = (a.re * Im - Re * a.im) / (a.im * a.im + a.re * a.re);
    return *this;
}



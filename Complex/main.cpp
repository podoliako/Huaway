#include "Complex.h"
#include <iostream>
#include <cmath>

Complex::Complex(double re, double im) {
    this->re = re;
    this->im = im;
}

double Complex::get_real() const{
    return this->re;
}

double Complex::get_im() const{
    return this->im;
}

void Complex::print() const {
    std::cout << this->re << " + " << this->im << "i" << std::endl;
}

Complex::Complex(const Complex& n) {
    this->re = n.re;
    this->im = n.im;
}

Complex Complex::operator+(const Complex &a) const {
    Complex res(0, 0);
    res.re = this->re + a.re;
    res.im = this->im + a.im;
    return (res);
}

Complex Complex::operator-(const Complex &a) const {
    Complex res(0, 0);
    res.re = this->re - a.re;
    res.im = this->im - a.im;
    return (res);
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
    Complex res(0, 0);
    res.re = this->re + a;
    res.im = this->im;
    return (res);
}

Complex Complex::operator*(const double &a) const {
    return Complex(this->re * a, this->im);
}

Complex Complex::operator-(const double &a) const {
    return Complex(re - a, im);
}

Complex& Complex::operator+=(const Complex& a) {
    this->re += a.get_real();
    this->im += a.get_im();
    return *this;
}

Complex &Complex::operator-=(const Complex& a) {
    this->re -= a.get_real();
    this->im -= a.get_im();
    return *this;
}

Complex &Complex::operator*=(const Complex& a) {
    *this = Complex(*this * a);
    return *this;
}


int main() {
    Complex a(3, 2);
    Complex b(1, 1);
    a.print(); // 3 + 2i
    b.print(); // 1 + 1i

    Complex c(a + b);
    c.print(); // 4 + 3i

    c = - a;
    c.print(); // -3 + -2i

    c = a - b;
    c.print(); // 2 + 1i

    c = a * b;
    c.print(); // 5 + 5i

    c = b + a * 2;
    c.print(); // 7 + 3i

    Complex d(1,1);
    c = d;
    a += d;
    a.print(); // 4 + 3i
    d.print(); // 1 + 1i

    std::cout << (a == b ) << " " <<  (a != b) << " " << a.abs() << std::endl; // 0 1 5

    std::cout << b.abs() << std::endl; //  1.41

    return 0;
}

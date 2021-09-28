#include "header.h"
#include <iostream>
#include <cmath>


Complex::Complex(double re, double im) {
    this->re = re;
    this->im = im;
}

double Complex::get_real() {
    return this->re;
}

double Complex::get_im() {
    return this->im;
}

void Complex::print() {
    std::cout << this->re << " + " << this->im << "i" << std::endl;
}

Complex::Complex(const Complex& n) {
    this->re = n.re;
    this->im = n.im;
}

const Complex Complex::operator+(const Complex &a) const {
    Complex res(0, 0);
    res.re = this->re + a.re;
    res.im = this->im + a.im;
    return (res);
}

const Complex Complex::operator-(const Complex &a) const {
    Complex res(0, 0);
    res.re = this->re - a.re;
    res.im = this->im - a.im;
    return (res);
}

const Complex Complex::operator-() const {
    return Complex(-this->re, -this->im);
}

const Complex Complex::operator*(const Complex &a) const {
    return Complex(this->re*a.re + this->im*a.im, this->im*a.re + this->re*a.im);
}

const bool Complex::operator==(const Complex &a) const {
    if(this->im == a.im and this->re == a.im) return true;
    else return false;
}

const bool Complex::operator!=(const Complex &a) const {
    if(this->im != a.im or this->re != a.im) return true;
    else return false;
}

double Complex::abs() {
    return sqrt((this->re) * (this->re) + (this->im) * (this->im));
}

void Complex::operator=(const Complex &a) {
    this->re = a.re;
    this->im = a.im;
}


int main() {
    Complex a(3, 2);
    Complex b(1, 1);
    a.print();
    b.print();

    Complex c(a + b);
    c.print();

    c = - a;
    c.print();

    c = a - b;
    c.print();

    c = a * b;
    c.print();

    std::cout << (a == b ) << " " <<  (a != b) << std::endl;

    std::cout << b.abs() << std::endl;

    return 0;
}

//
// Created by egorchan on 03.10.2021.
//
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
    if(im >= 0) std::cout << this->re << " + " << this->im << "i" << std::endl;
    else std::cout << this->re << " - " << -this->im << "i" << std::endl;

}

Complex::Complex(const Complex& n) {
    this->re = n.re;
    this->im = n.im;
}

Complex Complex::operator+(const Complex &a) const {
    Complex res(0, 0);
    res.re = this->re + a.re;
    res.im = this->im + a.im;
    return res;
}

Complex Complex::operator-(const Complex &a) const {
    Complex res(0, 0);
    res.re = this->re - a.re;
    res.im = this->im - a.im;
    return res;
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
    return res;
}

Complex Complex::operator*(const double &a) const {
    return Complex(this->re * a, this->im * a);
}

Complex Complex::operator/(const Complex &a) const {
    Complex res;
    res.set_real((re * a.get_real() + im * a.get_im()) / (a.get_im() * a.get_im() + a.get_real() * a.get_real()));
    res.set_im((a.get_real() * im - re * a.get_im()) / (a.get_im() * a.get_im() + a.get_real() * a.get_real()));
    return res;
}

Complex Complex::operator/(const double &a) const {
    return Complex(this->re / a, this->im / a);
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

Complex &Complex::operator/=(const Complex& a)
{
    double Re = re;
    double Im = im;
    re = (Re * a.get_real() + Im * a.get_im()) / (a.get_im() * a.get_im() + a.get_real() * a.get_real());
    im = (a.get_real() * Im - Re * a.get_im()) / (a.get_im() * a.get_im() + a.get_real() * a.get_real());
    return *this;
}

void Complex::set_real(double a) {
    this->re = a;
}

void Complex::set_im(double a) {
    this->im = a;
}



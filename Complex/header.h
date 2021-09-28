//
// Created by egorchan on 28.09.2021.
//

struct Complex{
private:
    double re;
    double im;
public:
    Complex(double re, double im);
    Complex(const Complex&);
    void print();
    double abs();
    double get_real();
    double get_im();
    const Complex operator+(const Complex& a) const;
    const Complex operator-(const Complex& a) const;
    const Complex operator*(const Complex& a) const;
    const Complex operator-() const;
    const bool operator==(const Complex& a) const;
    const bool operator!=(const Complex& a) const;
    void operator=(const Complex& a);
};

#ifndef COMPLEX_HEADER_H
#define COMPLEX_HEADER_H

#endif //COMPLEX_HEADER_H

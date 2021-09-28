//
// Created by egorchan on 28.09.2021.
//

#ifndef COMPLEX_COMPLEX_H
#define COMPLEX_COMPLEX_H

struct Complex{
private:
    double re;
    double im;
public:
    Complex(double re, double im);
    Complex(const Complex&);
    void print() const;
    double abs();
    double get_real();
    double get_im();
    void operator+=(double a);
    Complex operator+(const Complex& a) const;
    Complex operator+(const double &a) const;
    Complex operator-(const Complex& a) const;
    Complex operator*(const Complex& a) const;
    Complex operator*(const double& a) const;
    Complex operator-() const;
    bool operator==(const Complex& a) const;
    bool operator!=(const Complex& a) const;
    void operator=(const Complex& a);
    ~Complex() = default;
};

#endif //COMPLEX_COMPLEX_H

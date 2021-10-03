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
    Complex();
    Complex(double re, double im);
    Complex(const Complex&);

    void print() const;
    double abs() const;
    double get_real() const;
    double get_im() const;
    void set_real(double a);
    void set_im(double a);

    Complex& operator+=(const Complex& a);
    Complex& operator-=(const Complex& a);
    Complex& operator*=(const Complex& a);

    Complex operator+(const Complex& a) const;
    Complex operator+(const double &a) const;

    Complex operator-(const Complex& a) const;
    Complex operator-(const double &a) const;

    Complex operator*(const Complex& a) const;
    Complex operator*(const double& a) const;

    Complex operator-() const;
    Complex operator+() const;

    bool operator==(const Complex& a) const;
    bool operator!=(const Complex& a) const;
    Complex& operator=(const Complex& a);

    ~Complex(){};
};

#endif //COMPLEX_COMPLEX_H

#ifndef COMPLEX_COMPLEX_H
#define COMPLEX_COMPLEX_H

struct Complex{
public:
    double re{};
    double im{};

    Complex();
    Complex(double re, double im);
    Complex(const Complex&);
    ~Complex();

    void print() const;
    double abs() const;

    Complex& operator+=(const Complex& a);
    Complex& operator-=(const Complex& a);
    Complex& operator*=(const Complex& a);
    Complex& operator/=(const Complex& a);

    Complex operator+(const Complex& a) const;
    Complex operator+(const double &a) const;

    Complex operator-(const Complex& a) const;
    Complex operator-(const double &a) const;

    Complex operator*(const Complex& a) const;
    Complex operator*(const double& a) const;

    Complex operator/(const Complex& a) const;
    Complex operator/(const double& a) const;

    Complex operator-() const;
    Complex operator+() const;

    bool operator==(const Complex& a) const;
    bool operator!=(const Complex& a) const;
    Complex& operator=(const Complex& a);

};

#endif //COMPLEX_COMPLEX_H

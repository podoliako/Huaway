#include <iostream>

#include "Complex.h"


void run_test(){
    for(int nmb = -100; nmb < 100; nmb++){
        Complex a(nmb, nmb);
        Complex b(nmb, nmb);
        if(a.re != nmb or a.im != nmb or b.re != nmb or b.im != nmb){
            std::cout << "Constructor from doubles error, number = " << nmb << std::endl;
        }
    }

    for(int nmb = -100; nmb < 100; nmb++){
        Complex a(nmb, nmb);
        Complex b(a);
        if(b.re != nmb or b.im != nmb){
            std::cout << "Copy constructor error, number = " << nmb << std::endl;
        }
    }

    for(int nmb = -100; nmb < 100; nmb++){
        Complex a(nmb, nmb);
        Complex b(-a);
        if(b.re != -nmb or b.im != -nmb){
            std::cout<< "Minus one argument operator error, number = " << nmb << std::endl;
        }
    }

    for(int nmb = -100; nmb < 100; nmb++){
        Complex a(nmb, nmb);
        Complex b(nmb, nmb);
        if((a == b) != true){
            std::cout << "== operator error, number = " << nmb << std::endl;
        }
        if((a != b) != false){
            std::cout << "!= operator error, number = " << nmb << std::endl;
        }
        Complex d;
        d = Complex(nmb, nmb);
        if(d.re != nmb or d.im != nmb){
            std::cout << "= operator error, number = " << nmb << std::endl;
        }
    }


    for(int nmb = -100; nmb < 100; nmb++) {
        Complex a(nmb, nmb);
        Complex b(nmb, nmb);
        Complex c(a - b);
        if (c.re != 0 or c.im != 0) {
            std::cout << "Minus two arguments operator error, number = " << nmb << std::endl;
        }
        c = a + -b;
        if (c.re != 0 or c.im != 0) {
            std::cout << "Plus two arguments operator error, number = " << nmb << std::endl;
        }
        c = a;
        c -= a;
        if (c.re != 0 or c.im != 0) {
            std::cout << "-= operator error, number = " << nmb << std::endl;
        }
        c = -a;
        c += a;
        if (c.re != 0 or c.im != 0) {
            std::cout << "+= operator error, number = " << nmb << std::endl;
        }
    }

    Complex a(3, 2);
    Complex b(-7, 25);
    Complex c(a * b);
    if(c.re != 29 or c.im != 61) std::cout << "Multiplication operator error" << std::endl;

}
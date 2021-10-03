//
// Created by egorchan on 03.10.2021.
//

#include "Complex.cpp"


void run_test(){
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
    c.print();  // 1 + 1i

    d.set_im(0);
    d.set_real(2);
    d.print(); // 2 + 0i

    std::cout << (a == b ) << " " <<  (a != b) << " " << a.abs() << std::endl; // 0 1 5

    std::cout << b.abs() << std::endl; //  1.41

}
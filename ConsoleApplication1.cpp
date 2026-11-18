#include <iostream>

//int value1 = 10, value2 = 20;
//float f = 36.6; float f = 36.6f; // f
//int* ptr1, ptr2; int* ptr1, *ptr2;  // *ptr2
//ptr1 = a; ptr1 = &value1; //&value1
//ptr2 = &f; ptr2 = &value2; //&value2
//value2 = &a; value2 = &ptr1; //&ptr1

int main()
{
    setlocale(LC_ALL, "RU");

    double x = 2, y = 5, total;
    double* ptrx, * ptry, * ptrt;

    ptrx = &x;
    ptry = &y;
    ptrt = &total;

    *ptrt = *ptrx + *ptry;
    *ptrx += 5;

    std::cout << ptrx << std::endl;
    std::cout << ptry << std::endl;
    std::cout << *ptrx << std::endl;
    std::cout << *ptry << std::endl;
    std::cout << *ptrt << std::endl;


}

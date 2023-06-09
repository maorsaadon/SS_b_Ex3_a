

#include "doctest.h"
#include <stdexcept>
#include <iostream>
#include <stddef.h>
#include "Fraction.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("Creating Fractions")
{
    Fraction f1(1, 2), f2(2, 3), f3(0, 5);

    CHECK(f1.getNumerator() == 1);
    CHECK(f1.getDenominator() == 2);
    CHECK(f2.getNumerator() == 2);
    CHECK(f2.getDenominator() == 3);
    CHECK(f3.getNumerator() == 0);
    CHECK(f3.getDenominator() == 1);
}


TEST_CASE("Fraction =")
{
    Fraction f1(1, 2), f2(2, 3);
    f1 = f2;
    CHECK(f1 == f2);
}

TEST_CASE("Test basic arithmetic operations")
{
    Fraction a(1, 2), b(3, 4), c(2, 3);

    CHECK((a + b) == Fraction(5, 4));
    CHECK((a - b) == Fraction(-1, 4));
    CHECK((a * b) == Fraction(3, 8));
    CHECK((a / c) == Fraction(3, 4));
}

TEST_CASE("Fraction addition")
{
    Fraction f1(1, 2), f2(2, 3);
    Fraction f3 = f1 + f2;

    CHECK(f3.getNumerator() == 7);
    CHECK(f3.getDenominator() == 6);

    Fraction b(14, 21);
    CHECK_NOTHROW(2.3 + b);
    CHECK_NOTHROW(b + 2.3);
}


TEST_CASE("Fraction subtraction")
{
    Fraction f1(1, 2);
    Fraction f2(2, 3);
    Fraction f3 = f2 - f1;

    CHECK(f3.getNumerator() == 1);
    CHECK(f3.getDenominator() == 6);

    Fraction b(14, 21);
    CHECK_NOTHROW(2.3 - b);
    CHECK_NOTHROW(b - 2.3);
}

TEST_CASE("Fraction multiplication")
{
    Fraction f1(1, 2);
    Fraction f2(2, 3);
    Fraction f3 = f1 * f2;

    CHECK(f3.getNumerator() == 1);
    CHECK(f3.getDenominator() == 3);

    Fraction b(14, 21);
    CHECK_NOTHROW(2.3 * b);
    CHECK_NOTHROW(b * 2.3);
}

TEST_CASE("Fraction division")
{
    Fraction f1(1, 2), f2(2, 3);
    Fraction f3 = f1 / f2;

    CHECK(f3.getNumerator() == 3);
    CHECK(f3.getDenominator() == 4);

    Fraction b(14, 21);
    CHECK_NOTHROW(2.3 / b);
    CHECK_NOTHROW(b / 2.3);
}

TEST_CASE("Fraction double addition")
{
    Fraction a(1, 2);

    CHECK((2.5 + a) == Fraction(6, 2));
    CHECK((a + 2.5) == Fraction(6, 2));
}

TEST_CASE("Test comparison operators")
{
    Fraction a(1, 2), b(3, 4), c(2, 3);

    CHECK(a < b);
    CHECK(!(a > b));
    CHECK(b > a);
    CHECK(!(b < a));
    CHECK(a == a);
    CHECK(a != b);
    CHECK(c <= b);
    CHECK(c >= a);
}


TEST_CASE("Fraction Increment ") {
    
    Fraction a(1, 2), b(3, 4);

    CHECK(a++ == Fraction(1, 2));
    CHECK(a == Fraction(3, 2));

    Fraction f1(4, 5);
    Fraction f2 = ++f1;
    Fraction f3(4 , 5);
    Fraction f4 = f3++;
    
    // We check that the value in f1 & f2 increase by 1
    CHECK(f1.getNumerator() == f2.getNumerator());
    CHECK(f1.getDenominator() == f2.getDenominator());
    
    // We check that the value in f3 increase by 1 but the value in f4 isn't
    CHECK_FALSE(f3.getNumerator() == f4.getNumerator());
    CHECK_FALSE(f3.getDenominator() == f4.getDenominator());
    
}

TEST_CASE("Fraction decrement") {
    
    Fraction a(1, 2), b(3, 4);

    CHECK(--a == Fraction(1, 2));
    CHECK(a == Fraction(1, 2));

    Fraction f1(4, 5);
    Fraction f2 = --f1;
    Fraction f3(4 , 5);
    Fraction f4 = f3--;
    
    // We check that the value in f1 & f2 increase by 1
    CHECK(f1.getNumerator() == f2.getNumerator());
    CHECK(f1.getDenominator() == f2.getDenominator());
    
    // We check that the value in f3 increase by 1 but the value in f4 isn't
    CHECK_FALSE(f3.getNumerator() == f4.getNumerator());
    CHECK_FALSE(f3.getDenominator() == f4.getDenominator());
    
}


TEST_CASE("Test reduce")
{
    Fraction a(1, 2), b(3, 6);

    CHECK(a == b);
}

TEST_CASE("Test printing")
{
    Fraction a(5, 3), b(14, 21), c(2 / 4);

    CHECK_NOTHROW(cout << "a: " << a << " b: " << b << endl);
    CHECK_NOTHROW(cout << "a+b: " << a + b << endl);
    CHECK_NOTHROW(cout << "a-b: " << a - b << endl);
    CHECK_NOTHROW(cout << "a/b: " << a / b << endl);
    CHECK_NOTHROW(cout << "a*b: " << a * b << endl);

    CHECK_NOTHROW(cout << "a>b? " << boolalpha << (a > b) << endl);
    CHECK_NOTHROW(cout << "a<b? " << boolalpha << (a < b) << endl);
    CHECK_NOTHROW(cout << "a>=b? " << boolalpha << (a >= b) << endl);
    CHECK_NOTHROW(cout << "a<=b? " << boolalpha << (a <= b) << endl);
    CHECK_NOTHROW(cout << "a==b? " << boolalpha << (a == b) << endl);
    CHECK_NOTHROW(cout << "a!=b? " << boolalpha << (a != b) << endl);
}

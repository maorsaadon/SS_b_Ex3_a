
#ifndef FRACTION_HPP
#define FRACTION_HPP
#include <iostream>
#include <stdexcept>
#include <limits>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

namespace ariel
{
    class Fraction
    {
    private:
        int numerator;
        int denominator;

        // Helper function to reduce the fraction
        void reduce();
        // Helper function to compute the greatest common divisor
        int gcd(int num1, int num2) const;

    public:
        // constructor
        Fraction();
        Fraction(int numerator, int denominator);
        Fraction(float num);

        // Friend operators for arithmetic operations
        friend Fraction operator+(const Fraction &num1, const Fraction &num2);
        friend Fraction operator-(const Fraction &num1, const Fraction &num2);
        friend Fraction operator*(const Fraction &num1, const Fraction &num2);
        friend Fraction operator/(const Fraction &num1, const Fraction &num2);

        // Friend operators for comparison operations
        friend bool operator==(const Fraction &num1, const Fraction &num2);
        friend bool operator!=(const Fraction &num1, const Fraction &num2);
        friend bool operator>(const Fraction &num1, const Fraction &num2);
        friend bool operator<(const Fraction &num1, const Fraction &num2);
        friend bool operator>=(const Fraction &num1, const Fraction &num2);
        friend bool operator<=(const Fraction &num1, const Fraction &num2);

        // Overloaded operators for increment and decrement operations
        Fraction operator++();    // pre-increment
        Fraction operator++(int); // post-increment
        Fraction operator--();    // pre-decrement
        Fraction operator--(int); // post-decrement

        // Overloaded operators for input and output operations
        friend ostream &operator<<(ostream &output, const Fraction &fraction);
        friend istream &operator>>(istream &input, Fraction &fraction);

        // Getter and setter functions
        int getNumerator() const;
        int getDenominator() const;
        void setNumerator(int numerator);
        void setDenominator(int denominator);
    };

};

#endif // FRACTION_HPP

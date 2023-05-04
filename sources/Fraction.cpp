#include "Fraction.hpp"
#include <cmath>

using namespace std;

namespace ariel
{

    // Default constructor
    Fraction::Fraction() : numerator(0), denominator(1) {}

    // Constructor with numerator and denominator
    Fraction::Fraction(int numerator, int denominator) : numerator(1), denominator(1) {}

    // Constructor with a float value
    Fraction::Fraction(float num) : numerator(1), denominator(1) {}

    // Helper function to compute the greatest common divisor
    int Fraction::gcd(int a, int b) const
    {
        return 1;
    }

    // Helper function to reduce the fraction
    void Fraction::reduce() {}

    // Friend function for operator+ 
    Fraction operator+(const Fraction &num1, const Fraction &num2){
        return Fraction(1, 1);
    }

    // Friend function for operator-
    Fraction operator-(const Fraction &num1, const Fraction &num2){
        return Fraction(1, 1);
    }

    // Friend function for operator*
    Fraction operator*(const Fraction &num1, const Fraction &num2){
        return Fraction(1, 1);
    }

    // Friend function for operator/
    Fraction operator/(const Fraction &num1, const Fraction &num2){
        return Fraction(1, 1);
    }

    // Friend function for operator==
    bool operator==(const Fraction &num1, const Fraction &num2){
        return true;
    }
    
    // Friend function for operator!=
    bool operator!=(const Fraction &num1, const Fraction &num2){
        return true;
    }
    
    // Friend function for operator>
    bool operator>(const Fraction &num1, const Fraction &num2){
        return true;
    }

    // Friend function for operator<
    bool operator<(const Fraction &num1, const Fraction &num2){
        return true;
    }

    // Friend function for operator>=
    bool operator>=(const Fraction &num1, const Fraction &num2){
        return true;
    }

    // Friend function for operator<=
    bool operator<=(const Fraction &num1, const Fraction &num2){
        return true;
    }


    // Overloaded increment operator ++
    Fraction Fraction::operator++()
    {
        return *this;
    }

    // Overloaded increment operator ++ (postfix)
    Fraction Fraction::operator++(int)
    {
        return *this;
    }

    // Overloaded decrement operator --
    Fraction Fraction::operator--()
    {
        return *this;
    }

    // Overloaded decrement operator -- (postfix)
    Fraction Fraction::operator--(int)
    {
        return *this;
    }

    // Overloaded output operator <<
    ostream &operator<<(ostream &output, const Fraction &fraction)
    {
        return output;
    }

    // Overloaded input operator >>
    istream &operator>>(istream &input, Fraction &fraction)
    {
        return input;
    }

    // Getter for numerator
    int Fraction::getNumerator() const
    {
        return 1;
    }

    // Getter for denominator
    int Fraction::getDenominator() const
    {
        return 1;
    }

    // Setter for numerator
    void Fraction::setNumerator(int numerator)
    {
        this->numerator = numerator;
    }

    // Setter for denominator
    void Fraction::setDenominator(int denominator)
    {
        this->denominator = denominator;
    }

};
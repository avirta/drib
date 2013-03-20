#include <iostream>
#include <conio.h>

class Fraction
{
    int numerator; // чисельник 
    int denomerator; // знаменник
public:
    int GetNumerator() { return numerator; }
    void SetNumerator(int num) { numerator=num; }
    
    int GetDenomerator() { return denomerator; }
    void SetDenomerator(int denom) { denomerator=denom; }
    Fraction() { numerator = 0; denomerator = 0; }
    Fraction(int num, int denom)
    {
        numerator = num;
        denomerator = denom;
    }
  Fraction operator* (const Fraction &frac);// & означає, що нам потрібне посилання, а не копія об'єкту
    Fraction operator/ (const Fraction &frac);
    Fraction operator- (const Fraction &frac);
    Fraction operator+ (const Fraction &frac);
    void ReduceByGreatestDenominator();//найбільший спільний знаменник
    int Fraction::CommonDenominator(const Fraction &frac);//спільний знаменник
};
Fraction Fraction::operator* (const Fraction &frac)
{
    return Fraction(numerator * frac.numerator, denomerator * frac.denomerator);
}
Fraction Fraction::operator/ (const Fraction &frac)
{
    return Fraction(numerator * frac.denomerator, denomerator * frac.numerator);
}

#include <iostream>
#include <conio.h>

class Fraction
{
    int numerator; // чисельник 
    int denomerator; // знаменник
     int integer; // ціле число
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
    Fraction operator* (const Fraction &frac);// & означає, що нам потрібне посилання, а не копія об'єкту, 
    Fraction operator/ (const Fraction &frac);// const, що об'єк за цим посиланням змінювати не можна
    Fraction operator- (const Fraction &frac);
    Fraction operator+ (const Fraction &frac);
    void ReduceByGreatestDenominator();//найбільший спільний знаменник
    int Fraction::CommonDenominator(const Fraction &frac);//спільний знаменник
    int Fraction:: CommonToImproperFraction(const Fraction &frac); // зведення до неправильного дробу
    int Fraction:: CommonToProperFraction(const Fraction &frac); // зведення до правильного дробу
};
Fraction Fraction::operator* (const Fraction &frac)
{
    return Fraction(numerator * frac.numerator, denomerator * frac.denomerator);
}
Fraction Fraction::operator/ (const Fraction &frac)
{
    return Fraction(numerator * frac.denomerator, denomerator * frac.numerator);
}
Fraction Fraction::operator- (const Fraction &frac)
{
    int comDenom = CommonDenominator(frac);
    int num1 = comDenom / denomerator * numerator;
    int num2 = comDenom / frac.denomerator * frac.numerator;
    return Fraction(num1 - num2, comDenom);
}
Fraction Fraction::operator+ (const Fraction &frac)
{
    int comDenom = CommonDenominator(frac);
    int num1 = comDenom / denomerator * numerator;
    int num2 = comDenom / frac.denomerator * frac.numerator;
    return Fraction(num1 + num2, comDenom);
}
void Fraction::ReduceByGreatestDenominator()
{
    int y = denomerator;
    int x = numerator;
    int t;       
    while (y!=0)
    {
        t = y;
        y = x % y;
        x = t;
    }
    numerator /= x;
    denomerator /= x;
}
#include <iostream>
#include <conio.h>

class Fraction
{
    int numerator; // ?enaeuiee 
    int denomerator; // ciaiaiiee
     int integer; // o?ea ?enei
public:
    int GetNumerator() { return numerator; }
    void SetNumerator(int num) { numerator=num; }
    
    int GetDenomerator() { return denomerator; }
    void SetDenomerator(int denom) { denomerator=denom; }
    
    int GetInteger() {return integer;}
    void SetInteger (int intg){integer=intg;}
    
    Fraction() { numerator = 0; denomerator = 0; }
    Fraction(int num, int denom)
    {
        numerator = num;
        denomerator = denom;
        integer = intg;
    }
  Fraction operator* (const Fraction &frac);// & icia?a?, ui iai iio??aia iineeaiiy, a ia eii?y ia'?eoo
    Fraction operator/ (const Fraction &frac);
    Fraction operator- (const Fraction &frac);
    Fraction operator+ (const Fraction &frac);
    void ReduceByGreatestDenominator();//iaea?euoee ni?euiee ciaiaiiee
    int Fraction::CommonDenominator(const Fraction &frac);//ni?euiee ciaiaiiee  
    int Fraction::CommonToImproperFraction(const Fraction &frac); // caaaaiiy ai iai?aaeeuiiai a?iao
    int Fraction::CommonToProperFraction(const Fraction &frac); // caaaaiiy ai i?aaeeuiiai a?iao
};

Fraction Fraction::operator* (const Fraction &frac)
{
    return Fraction(numerator * frac.numerator, denomerator * frac.denomerator);
}
Fraction Fraction::operator/ (const Fraction &frac)
{
    return Fraction(numerator * frac.denomerator, denomerator * frac.numerator);
}
Fraction Fraction::operator- (const Fraction &frac)
{
    int comDenom = CommonDenominator(frac);
    int num1 = comDenom / denomerator * numerator;
    int num2 = comDenom / frac.denomerator * frac.numerator;
    return Fraction(num1 - num2, comDenom);
}
Fraction Fraction::operator+ (const Fraction &frac)
{
    int comDenom = CommonDenominator(frac);
    int num1 = comDenom / denomerator * numerator;
    int num2 = comDenom / frac.denomerator * frac.numerator;
    return Fraction(num1 + num2, comDenom);
}

// 
void Fraction::ReduceByGreatestDenominator()
{
    int y = denomerator;
    int x = numerator;
    int t;       
    while (y!=0)
    {
        t = y;
        y = x % y;
        x = t;
    }
    numerator /= x;
    denomerator /= x;
}
 int Fraction::CommonToProperFraction()
 double a;
 if (num>denom)
 {num%denom=a;
 (num-a)/denom=intg;
  num=num/a
 

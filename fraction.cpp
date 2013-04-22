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
   
   int GetInteger() {return integer;}
    void SetInteger (int intg){integer=intg;}
    
    Fraction() { numerator = 0; denomerator = 0; }
    Fraction(int num, int denom, int intg)
    {
        numerator = num;
        denomerator = denom;
        integer = intg;
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
 int Fraction::CommonToProperFraction()
 double a;
 int y = denomerator;
 int x = numerator;
 if (x>y)
 {x%y=a;
 intg=(x-a)/y;
 return intg, a;
}
  int Fraction::CommonToImproperFraction()
 {  int y = denomerator;
   int x = numerator;
  if(intg!=0)
{x=intg*y+x;}
return x, y;
else
return x,y;}

int main(int argc, char *argv[])
{
        int num = 1;
        int denom = 3;
}


#include "Fraction.h"
#include <iostream>

using std::ostream;

Fraction::Fraction(int numerator, int denominator)
{
	m_numerator = numerator;
	m_denominator = denominator;
}

void Fraction::displayFraction(ostream& stream) const
{
	stream << Fraction::getNumerator() << "/" << Fraction::getDenominator();
}

int Fraction::getNumerator() const
{
	return m_numerator;
}

int Fraction::getDenominator() const
{
	return m_denominator;
}

ostream& operator<<(ostream &stream, Fraction const& fraction)
{
	fraction.displayFraction(stream);
	return stream;
}
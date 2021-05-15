#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

using std::ostream;

class Fraction
{
	public:
		Fraction(int nominator, int denominator);
		void displayFraction(ostream& stream) const;
		int getNumerator() const;
		int getDenominator() const;

	private:
		int m_numerator;
		int m_denominator;

};

ostream& operator<<(ostream &stream, Fraction const &fraction);

#endif // FRACTION_H

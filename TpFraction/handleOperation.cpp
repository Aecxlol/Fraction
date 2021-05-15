#include <iostream>
#include <string>
#include "Fraction.h"
#include "handleOperation.h"

using std::cout;
using std::cin;
using std::string;

void handleOperation(int operation)
{
	int firstFractionNumerator = 0;
	int firstFractionDenominator = 0; 
	int secondFractionNumerator = 0;
	int secondFractionDenominator = 0;

	string operationsName[4] = { "addition", "soustraction", "multiplication", "division" };

	cout << "\nEntrez le numerateur de la premiere fraction : ";
	cin >> firstFractionNumerator;

	cout << "Entrez le denominateur de la premiere fraction : ";
	cin >> firstFractionDenominator;

	Fraction firstFraction(firstFractionNumerator, firstFractionDenominator);

	cout << "\n-> Votre premiere fraction : " << firstFraction << "\n\n";

	cout << "Entrez le numerateur de la seconde fraction : ";
	cin >> secondFractionNumerator;

	cout << "Entrez le denominateur de la seconde fraction : ";
	cin >> secondFractionDenominator;

	Fraction secondFraction(secondFractionNumerator, secondFractionDenominator);

	cout << "\n-> Votre seconde fraction : " << secondFraction << "\n";

	cout << "\nRésultat " << operationsName[operation - 1] << " de " << firstFraction << " et de " << secondFraction << " : ";
}
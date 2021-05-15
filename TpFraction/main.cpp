#include <iostream>
#include "Fraction.h"
#include "compareFraction.h"
#include "handleOperation.h"

using std::cout;
using std::cin;

int main()
{
    unsigned int userChoice = 0;
	unsigned int menuError = 0;

    cout << "-- TP SUR LES FRACTIONS --\n\n";
    cout << "Nous allons comparer 2 fractions et determiner qui est la plus grande.\n";

    while (userChoice != 1 && userChoice != 2)
    {
		if (menuError > 0)
		{
			cout << "\nChoix incorrect.\n\n";
		}

		cout << "1 - Commencer\n";
		cout << "2 - Quitter\n";
		cout << "Votre choix ? ";
		cin >> userChoice;

		switch (userChoice)
		{
			case 1:
			{
				int userChoiceSubMenu = 0;
				int subMenuError = 0;

				while (userChoiceSubMenu < 1 || userChoiceSubMenu > 5)
				{
					if (subMenuError > 0)
					{
						cout << "\nChoix incorrect \n";
					}

					cout << "\nQuelle operation de fraction voulez-vous faire ? \n";
					cout << "1 - Addition\n";
					cout << "2 - Soustraction\n";
					cout << "3 - Multiplication\n";
					cout << "4 - Division\n";
					cout << "5 - Quitter\n";
					cout << "Votre choix ? ";
					cin >> userChoiceSubMenu;

					switch (userChoiceSubMenu)
					{
						case 1:
						case 2:
						case 3:
						case 4:
							handleOperation(userChoiceSubMenu);

						case 5:
							exit(EXIT_SUCCESS);
					}

					subMenuError++;
				}
			}
				break;

			case 2:
				cout << "A bientot !\n";
				exit(EXIT_SUCCESS);
				break;
		}
		menuError++;
    }
}

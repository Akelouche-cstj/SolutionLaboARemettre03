// But: l'ordinateur doit mémoriser un nombre au hasard et ensuite l'utilisateur doit deviner le nombre.
// Date : 2020-10-04
// Auteur: Amine Kelouche

#include <iostream>
#include <time.h> // pour utiliser time 
using namespace std; // ne pas avoir à utiliser std
#include <cstdlib> // pouvoir utiliser srand() et rand()
int main()
{
	setlocale (LC_ALL,"");
	int essais = 0; // initialiser variable
	int devinette = 0; // initialiser variable
	int iRandom; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
	srand(time(0)); // pour activer l’aléatoire dans le programme
	iRandom = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom
	cout << "vous avez 5 essais pour deviner un nombre entre 1 et 100" << endl;
	cout << iRandom << endl;
	
	for (int essais = 0; essais < 5; essais++) // le nombre d'essais est égal a 0, 
	{										   // essais < 5 l'utilisateur a 5 essais
		cout << "Devine" << endl;			   // essais ++ c'est pour qu'il continue. 
		cin >> devinette;

		if (devinette == iRandom)       // si la devinette est bonne donc sa termine la loop avec break;
		{
			cout << "vous avez deviner! c'était le nombre " << iRandom;
			break; // break termine la loop;
		}
		else if (devinette < iRandom)      // le nombre est faux donc la loop continue
		{
			cout << " plus haut! " << endl;
		}
		else if (devinette > iRandom)		// le nombre est faux donc la loop continue
		{
			cout << " plus bas! " << endl;
		}
	}
	if (essais < 5)
	{
		cout << " vous avez eu le maximum nombre d'éssais!";
	}


	return 0;
}
	
/*				numero a trouver			resultat
*					  93					
*  essais		     2							plus haut
*					5							plus haut
*					100						plus bas	
*					39						plus bas
*					93						vous avez devinez!
*/
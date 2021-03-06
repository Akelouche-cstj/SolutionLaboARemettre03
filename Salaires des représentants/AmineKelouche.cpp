//But: D�veloppez un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant et qui calcule et
//affiche son salaire
//Date:2020-10-04
//Auteur: Amine Kelouche

/*Une grosse soci�t� de produits chimiques r�mun�re ses repr�sentants commerciaux � la commission. Les
repr�sentants re�oivent 250 $ par semaine plus 7.5% de leurs ventes brutes par semaine. Par exemple, un
repr�sentant qui vend pour 5000 $ de produits chimiques en une semaine, per�oit un salaire de 250 $ plus 7.5 % de
5000$, soit un total de 625 $. 
*/
#include <iostream> // pour pouvoir utilis� les commandes de input et output
using namespace std; // permet de ne pas avoir � utiliser std:: avant les commandes input et output.

int main() // d�but du programme
{
	setlocale(LC_ALL,""); // permet de convertir les accents dans la console correctement

	// on initialise les variables.
	const int paye = 250; // une constante qui ne changeras pas. 
	int semaines;
	float ventes;   // toutes les variables float que je met c'est a cause que je veux qu'il inclus les nombres a virgule
	cout << "Combiens de semaines avez vous travaill�?" << endl;
	cin >> semaines;


	if (semaines <= 0) // donc si la personne n'as pas travailler elle a forc�ment pas d'argent et aucune vente.
	{
		cout << "vous n'avez pas travaill�, donc vous n'allez pas �tres pay�.";
		return 0;  // j'arr�te le programme ici en retournant une variable a int main()
	}
	
	cout << "Vous avez travaillez " << semaines << " semaines" << endl;
	cout << "Combiens de ventes avez-vous fait? " << endl;
	cin >> ventes;

	if (ventes == -1) // si l'utilisateur rentre -1 le programme s'arr�te avec return 0; qui retourne un nombre � main.
	{
		return 0;
	}
	if (ventes <= 0) // si la personne fait aucune vente ou des ventes n�gative son salaire n'est pas affect�,
	{                // il n'aura juste pas de bonus. 
		ventes = 0;
	}
	else
		cout << "vous avez fait " << ventes << " ventes!" << endl;
		const float bonus = ((ventes / 100) * 7.5); // j'entre les autre constante ici puisqu'il faut que l'utilisateur 
												// entre la valeur de vente pour que l'ordinateur puisse calculer le bonus.
		const float total = paye * semaines + bonus;// ici aussi les constantes vienne apr�s car on ne sait pas combien de semaines 
												  // l'employ�e a travailler avant d'avoir demander � l'utilisateur.
		cout << "votre salaire est de " << total << endl;

	
	while (ventes >= 0 && ventes <= 0 || semaines > 0) // on met les conditions pour que la loop while fonctionne correctement.
	{
		cout << "Combiens de semaines avez vous travaill�?" << endl;
		cin >> semaines;

		if (semaines <= 0) // je met les m�mes conditions qu'il y a en haut puisque c'est le m�me code.
		{
			cout << "vous n'avez pas travaill�, donc vous n'allez pas �tres pay�.";
			break;  // j'arr�te le programme ici en retournant une variable a int main()
		}

		cout << "Vous avez travaillez " << semaines << " semaines" << endl;
		cout << "Combiens de ventes avez-vous fait? " << endl;
		cin >> ventes;

		if (ventes == -1) 
		{
			break; // break arrete le loop si ventes est �gale a -1
		}

		 if (ventes <=0)
		 {
			ventes = 0;
		 }
		 else
			 cout << "vous avez fait " << ventes << " ventes!" << endl;
			 const float bonus = ((ventes / 100) * 7.5); 
			 const float total = paye * semaines + bonus;
			 cout << "votre salaire est de " << total << endl;
		
	}
	return 0;
}


/* Semaines		ventes     bonus    total
*    1			5000		7.5		 625
*    3          1000        7.5		825
*	 4          2000        " "     1150
*    0           //         " "       0
*    50        30000		" "     14750
*	 1		   -100			" "		250
*    1        5555                  666.625
*/

#ifndef EXPLORATION_CPP
#define EXPLORATION_CPP

#include "Exploration.h"
#include <iostream>
#include <string>

// exercice 1 
//int main()
//    {
//    int entre;
//    std::cout << "Ou voulez vous aller ?\n" << std::endl;
//    std::cout << "Destination 1 : La rescousse\n" << std::endl;
//    std::cout << "Destination 2 : Carrefour\n" << std::endl;
//    std::cout << "Tapez 1 ou 2" << std::endl;
//    std::cin >> entre;
//    
//    if (entre==1) {
//        std::cout << "Vous allez a la Rescousse ! \n" << std::endl;
//    }
//    else if(entre==2)
//    {
//        std::cout << "Vous allez au Carrefour\n" << std::endl;
//    }
//    else
//    {
//       std::cout << "les destinations disponibles sont 1 ou 2\n" << std::endl;
//    }
//}

// exercice 2

//int main()
//{
//    std::string entre;
//    std::string s1 = "Rescousse";
//    std::string s2 = "Carrefour";
//    std::cout << "Ou voulez vous aller ?\n" << std::endl;
//    std::cout << "Destination 1 : La rescousse\n" << std::endl;
//    std::cout << "Destination 2 : Carrefour\n" << std::endl;
//    std::cout << "Tapez Rescousse ou Carrefour" << std::endl;
//    std::cin >> entre;
//
//    if (entre == s1) {
//        std::cout << "Vous allez a la Rescousse ! \n" << std::endl;
//    }
//    else if (entre == s2)
//    {
//        std::cout << "Vous allez au Carrefour\n" << std::endl;
//    }
//    else
//    {
//        std::cout << "les destinations disponibles sont La rescousse ou Carrefour\n" << std::endl;
//    }
//}

//exercice 3
class Lieu {
	public:
		std::string nom;
		std::string description;
		int difficulte;
		Lieu(std::string x, std::string y, int z) {
			nom = x;
			description = y;
			difficulte = z;
		}

		std::string getNom() {
			return nom; 
		}
		std::string getDescription() {
			return description;
		}

		void deplacement(std::string lieuActuel, int lieuArrive);

};

void Lieu::deplacement(std::string lieuActuel, int lieuArrive) {
	lieuActuel = nom;
	std::cout << "Vous etes ici : " << lieuActuel << " ou voulez vous aller? 0 ou 1" << "\n";
	std::cin >> lieuArrive;
	if (lieuArrive == 0) {
		std::cout << "Vous allez a la Rescousse ! \n" << std::endl;
	}
	else if (lieuArrive == 1)
	{
		std::cout << "Vous allez au Carrefour\n" << std::endl;
	}
	else
	{
		std::cout << "les destinations disponibles sont La rescousse ou Carrefour\n" << std::endl;
	}
}
 //tentative d'une fonction deplacement, je ne comprend toujours pas comment bien intéragir avec les classes et les variables à qui on attribue la classe.




int main()
{
	Lieu lieu1("Rescousse","Bar bistrot tenu par le meilleur barman de france pres de l'ETPA", 4);
	Lieu lieu2("Carrefour", "Superette ou l'on trouvera bieres chips et sandwichs !", 9);
	Lieu lieu3("ETPA", "Ecole de jeu video a Rennes, qui nous apprend par exemple a faire ce code !", 16);


	std::string lieux[3] = { "", "", ""};

	lieux[0] += lieu1.getNom();
	lieux[1] += lieu2.getNom();
	lieux[2] += lieu3.getNom();

	std::cout << lieux[0] << " " << lieux[1] << " " << lieux[2] << "\n";

	lieu3.deplacement("",0);

}








#endif
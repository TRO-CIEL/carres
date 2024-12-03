#include <iostream>
#include "carre.h"

using namespace std;

int main() {
    CCarre carre;

    // Initialisation des attributs avec les setters
    carre.Setsx(10);
    carre.Setsy(20);
    carre.Setcote(30);

    // Affichage des caractéristiques du carré
    carre.Afficher();

    // Récupération des valeurs avec les getters
    cout << "Valeurs récupérées:" << endl;
    cout << "sx: " << carre.Getsx() << endl;
    cout << "sy: " << carre.Getsy() << endl;
    cout << "cote: " << carre.GetCote() << endl;

    // Déplacement du carré
    cout << "Déplacement du carré vers le nord de 5 pixels..." << endl;
    carre.Deplacer('n', 5);
    carre.Afficher();

    cout << "Déplacement du carré vers l'est de 10 pixels..." << endl;
    carre.Deplacer('e', 10);
    carre.Afficher();

    return 0;
}
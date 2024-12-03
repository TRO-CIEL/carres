#include <iostream>
#include "carre.h"

using namespace std;

int main() {
    locale::global(locale("fr-fr"));
    CCarre carre1; // Constructeur par défaut
    CCarre carre2(10, 20, 30); // Constructeur paramétré

    // Affichage des carrés
    cout << "Carre 1 (par défaut):" << endl;
    carre1.Afficher();

    cout << "Carre 2 (paramétré):" << endl;
    carre2.Afficher();

    // Déplacement avec direction et saut
    cout << "Déplacement de carre2 vers le nord de 5 pixels..." << endl;
    carre2.Deplacer('n', 5);
    carre2.Afficher();

    // Déplacement avec vecteur dx, dy
    cout << "Déplacement de carre2 avec le vecteur (10, -10)..." << endl;
    carre2.Deplacer(10, -10);
    carre2.Afficher();

    // Tableau de 4 carrés
    CCarre tabCarres[4] = {
        CCarre(0, 0, 10),
        CCarre(10, 10, 20),
        CCarre(20, 20, 30),
        CCarre(30, 30, 40)
    };

    cout << "Tableau de 4 carrés:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Carré " << i + 1 << ":" << endl;
        tabCarres[i].Afficher();
    }

    // Allocation dynamique
    cout << "Création d'un carré en mémoire dynamique:" << endl;
    CCarre* carreDynamique = new CCarre(50, 60, 70);
    carreDynamique->Afficher();

    // Test des méthodes sur le carré dynamique
    cout << "Déplacement de carreDynamique avec le vecteur (-10, 15)..." << endl;
    carreDynamique->Deplacer(-10, 15);
    carreDynamique->Afficher();

    // Libération de la mémoire
    delete carreDynamique;
    cout << "Carré dynamique supprimé." << endl;

    return 0;
}
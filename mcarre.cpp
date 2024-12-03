#include <iostream>
#include "carre.h"

using namespace std;

int main() {
    locale::global(locale("fr-fr"));
    CCarre carre1; // Constructeur par d�faut
    CCarre carre2(10, 20, 30); // Constructeur param�tr�

    // Affichage des carr�s
    cout << "Carre 1 (par d�faut):" << endl;
    carre1.Afficher();

    cout << "Carre 2 (param�tr�):" << endl;
    carre2.Afficher();

    // D�placement avec direction et saut
    cout << "D�placement de carre2 vers le nord de 5 pixels..." << endl;
    carre2.Deplacer('n', 5);
    carre2.Afficher();

    // D�placement avec vecteur dx, dy
    cout << "D�placement de carre2 avec le vecteur (10, -10)..." << endl;
    carre2.Deplacer(10, -10);
    carre2.Afficher();

    // Tableau de 4 carr�s
    CCarre tabCarres[4] = {
        CCarre(0, 0, 10),
        CCarre(10, 10, 20),
        CCarre(20, 20, 30),
        CCarre(30, 30, 40)
    };

    cout << "Tableau de 4 carr�s:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Carr� " << i + 1 << ":" << endl;
        tabCarres[i].Afficher();
    }

    // Allocation dynamique
    cout << "Cr�ation d'un carr� en m�moire dynamique:" << endl;
    CCarre* carreDynamique = new CCarre(50, 60, 70);
    carreDynamique->Afficher();

    // Test des m�thodes sur le carr� dynamique
    cout << "D�placement de carreDynamique avec le vecteur (-10, 15)..." << endl;
    carreDynamique->Deplacer(-10, 15);
    carreDynamique->Afficher();

    // Lib�ration de la m�moire
    delete carreDynamique;
    cout << "Carr� dynamique supprim�." << endl;

    return 0;
}
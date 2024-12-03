#include <iostream>
#include "carre.h"

using namespace std;

int main() {
    CCarre carre;

    // Initialisation des attributs avec les setters
    carre.Setsx(10);
    carre.Setsy(20);
    carre.Setcote(30);

    // Affichage des caract�ristiques du carr�
    carre.Afficher();

    // R�cup�ration des valeurs avec les getters
    cout << "Valeurs r�cup�r�es:" << endl;
    cout << "sx: " << carre.Getsx() << endl;
    cout << "sy: " << carre.Getsy() << endl;
    cout << "cote: " << carre.GetCote() << endl;

    // D�placement du carr�
    cout << "D�placement du carr� vers le nord de 5 pixels..." << endl;
    carre.Deplacer('n', 5);
    carre.Afficher();

    cout << "D�placement du carr� vers l'est de 10 pixels..." << endl;
    carre.Deplacer('e', 10);
    carre.Afficher();

    return 0;
}
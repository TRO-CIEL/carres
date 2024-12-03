#ifndef CCARRE_H
#define CCARRE_H

#include <iostream>

class CCarre {
private:
    int sx;  // Coordonnée x du sommet supérieur gauche
    int sy;  // Coordonnée y du sommet supérieur gauche
    int cote; // Longueur du côté du carré

public:
    // Méthodes pour modifier les valeurs des attributs
    void Setsx(int sx1); // Affecte la valeur de sx
    void Setsy(int sy1); // Affecte la valeur de sy
    void Setcote(int cote1); // Affecte la valeur de cote

    // Méthode pour afficher les caractéristiques du carré
    void Afficher();

    // Méthodes pour récupérer les valeurs des attributs
    int Getsx(); // Retourne la valeur de sx
    int Getsy(); // Retourne la valeur de sy
    int GetCote(); // Retourne la valeur de cote

    // Méthode pour déplacer le carré
    void Deplacer(char direction, int saut);
};

#endif // CCARRE_H

using namespace std;

// Affecte une nouvelle valeur à sx
void CCarre::Setsx(int sx1) {
    sx = sx1;
}

// Affecte une nouvelle valeur à sy
void CCarre::Setsy(int sy1) {
    sy = sy1;
}

// Affecte une nouvelle valeur à cote
void CCarre::Setcote(int cote1) {
    cote = cote1;
}

// Affiche les caractéristiques du carré
void CCarre::Afficher() {
    cout << "Caractéristiques du carré:" << endl;
    cout << "Sommet supérieur gauche (sx, sy): (" << sx << ", " << sy << ")" << endl;
    cout << "Longueur du côté: " << cote << " pixels" << endl;
}

// Retourne la valeur de sx
int CCarre::Getsx() {
    return sx;
}

// Retourne la valeur de sy
int CCarre::Getsy() {
    return sy;
}

// Retourne la longueur du côté du carré
int CCarre::GetCote() {
    return cote;
}

// Déplace le carré en fonction de la direction et du saut
void CCarre::Deplacer(char direction, int saut) {
    switch (direction) {
    case 'n': // Nord
        sy -= saut;
        break;
    case 's': // Sud
        sy += saut;
        break;
    case 'o': // Ouest
        sx -= saut;
        break;
    case 'e': // Est
        sx += saut;
        break;
    default:
        cout << "Direction invalide!" << endl;
    }
}
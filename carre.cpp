#ifndef CCARRE_H
#define CCARRE_H

#include <iostream>

class CCarre {
private:
    int sx;  // Coordonn�e x du sommet sup�rieur gauche
    int sy;  // Coordonn�e y du sommet sup�rieur gauche
    int cote; // Longueur du c�t� du carr�

public:
    // M�thodes pour modifier les valeurs des attributs
    void Setsx(int sx1); // Affecte la valeur de sx
    void Setsy(int sy1); // Affecte la valeur de sy
    void Setcote(int cote1); // Affecte la valeur de cote

    // M�thode pour afficher les caract�ristiques du carr�
    void Afficher();

    // M�thodes pour r�cup�rer les valeurs des attributs
    int Getsx(); // Retourne la valeur de sx
    int Getsy(); // Retourne la valeur de sy
    int GetCote(); // Retourne la valeur de cote

    // M�thode pour d�placer le carr�
    void Deplacer(char direction, int saut);
};

#endif // CCARRE_H

using namespace std;

// Affecte une nouvelle valeur � sx
void CCarre::Setsx(int sx1) {
    sx = sx1;
}

// Affecte une nouvelle valeur � sy
void CCarre::Setsy(int sy1) {
    sy = sy1;
}

// Affecte une nouvelle valeur � cote
void CCarre::Setcote(int cote1) {
    cote = cote1;
}

// Affiche les caract�ristiques du carr�
void CCarre::Afficher() {
    cout << "Caract�ristiques du carr�:" << endl;
    cout << "Sommet sup�rieur gauche (sx, sy): (" << sx << ", " << sy << ")" << endl;
    cout << "Longueur du c�t�: " << cote << " pixels" << endl;
}

// Retourne la valeur de sx
int CCarre::Getsx() {
    return sx;
}

// Retourne la valeur de sy
int CCarre::Getsy() {
    return sy;
}

// Retourne la longueur du c�t� du carr�
int CCarre::GetCote() {
    return cote;
}

// D�place le carr� en fonction de la direction et du saut
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
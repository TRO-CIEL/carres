#include <iostream>

using namespace std;

class CCarre {
private:
    int sx;  // Coordonn�e x du sommet sup�rieur gauche
    int sy;  // Coordonn�e y du sommet sup�rieur gauche
    int cote; // Longueur du c�t� du carr�

public:
    // Constructeurs
    CCarre(); // Constructeur par d�faut
    CCarre(int sx1, int sy1, int cote1); // Constructeur param�tr�

    // M�thodes pour modifier les valeurs des attributs
    void Setsx(int sx1);
    void Setsy(int sy1);
    void Setcote(int cote1);

    // M�thode pour afficher les caract�ristiques du carr�
    void Afficher();

    // M�thodes pour r�cup�rer les valeurs des attributs
    int Getsx();
    int Getsy();
    int GetCote();

    // M�thode pour d�placer le carr� avec une direction et un saut
    void Deplacer(char direction, int saut);

    // Surcharge : d�placer le carr� avec un vecteur dx, dy
    void Deplacer(int dx, int dy);
};

// Constructeur par d�faut
CCarre::CCarre() : sx(0), sy(0), cote(0) {}

// Constructeur param�tr�
CCarre::CCarre(int sx1, int sy1, int cote1) : sx(sx1), sy(sy1), cote(cote1) {}

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

// Surcharge : d�placer le carr� avec un vecteur dx, dy
void CCarre::Deplacer(int dx, int dy) {
    sx += dx;
    sy += dy;
}
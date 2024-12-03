#ifndef CCARRE_H
#define CCARRE_H

#include <iostream>

class CCarre {
private:
    int sx;  // Coordonnée x du sommet supérieur gauche
    int sy;  // Coordonnée y du sommet supérieur gauche
    int cote; // Longueur du côté du carré

public:
    // Constructeurs
    CCarre(); // Constructeur par défaut
    CCarre(int sx1, int sy1, int cote1); // Constructeur paramétré

    // Méthodes pour modifier les valeurs des attributs
    void Setsx(int sx1);
    void Setsy(int sy1);
    void Setcote(int cote1);

    // Méthode pour afficher les caractéristiques du carré
    void Afficher();

    // Méthodes pour récupérer les valeurs des attributs
    int Getsx();
    int Getsy();
    int GetCote();

    // Méthode pour déplacer le carré avec une direction et un saut
    void Deplacer(char direction, int saut);

    // Surcharge : déplacer le carré avec un vecteur dx, dy
    void Deplacer(int dx, int dy);
};

#endif
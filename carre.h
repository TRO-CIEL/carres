#pragma once
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
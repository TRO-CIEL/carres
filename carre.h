#pragma once
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
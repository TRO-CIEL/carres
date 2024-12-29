/// @file carre.h
/// @brief Modifier ou Afficher les valeurs d'un carré définis
/// @details On peut définir les cotés du carré, les afficher ou encore les déplacer
/// @author Trompier Téo
/// @version 0.1 - Visual Studio 2019
/// @date 29/12/2024

#include <iostream>

/// @class CCarre
/// @brief Classe représentant un carré avec des coordonnées et une longueur de côté.
class CCarre {
private:
    /// @brief Coordonnée x du sommet supérieur gauche.
    int sx;

    /// @brief Coordonnée y du sommet supérieur gauche.
    int sy;

    /// @brief Longueur du côté du carré.
    int cote;

public:
    /// @brief Constructeur par défaut.
    CCarre();

    /// @brief Constructeur paramétré.
    /// @param[in] sx1 Coordonnée x du sommet supérieur gauche.
    /// @param[in] sy1 Coordonnée y du sommet supérieur gauche.
    /// @param[in] cote1 Longueur du côté du carré.
    CCarre(int sx1, int sy1, int cote1);

    /// @brief Définit la coordonnée x du sommet supérieur gauche.
    /// @param[in] sx1 Nouvelle valeur de la coordonnée x.
    void Setsx(int sx1);

    /// @brief Définit la coordonnée y du sommet supérieur gauche.
    /// @param[in] sy1 Nouvelle valeur de la coordonnée y.
    void Setsy(int sy1);

    /// @brief Définit la longueur du côté du carré.
    /// @param[in] cote1 Nouvelle longueur du côté.
    void Setcote(int cote1);

    /// @brief Affiche les caractéristiques du carré.
    void Afficher();

    /// @brief Récupère la coordonnée x du sommet supérieur gauche.
    /// @param[out] Retourne la coordonnée x actuelle.
    int Getsx();

    /// @brief Récupère la coordonnée y du sommet supérieur gauche.
    /// @param[out] Retourne la coordonnée y actuelle.
    int Getsy();

    /// @brief Récupère la longueur du côté du carré.
    /// @param[out] Retourne la longueur actuelle du côté.
    int GetCote();

    /// @brief Déplace le carré dans une direction donnée avec un saut.
    /// @param[in] direction Direction du déplacement ('N', 'S', 'E', 'O').
    /// @param[in] saut Distance du déplacement.
    void Deplacer(char direction, int saut);

    /// @brief Déplace le carré en utilisant un vecteur.
    /// @param[in] dx Déplacement sur l'axe x.
    /// @param[in] dy Déplacement sur l'axe y.
    void Deplacer(int dx, int dy);
};
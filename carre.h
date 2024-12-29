/// @file carre.h
/// @brief Modifier ou Afficher les valeurs d'un carr� d�finis
/// @details On peut d�finir les cot�s du carr�, les afficher ou encore les d�placer
/// @author Trompier T�o
/// @version 0.1 - Visual Studio 2019
/// @date 29/12/2024

#include <iostream>

/// @class CCarre
/// @brief Classe repr�sentant un carr� avec des coordonn�es et une longueur de c�t�.
class CCarre {
private:
    /// @brief Coordonn�e x du sommet sup�rieur gauche.
    int sx;

    /// @brief Coordonn�e y du sommet sup�rieur gauche.
    int sy;

    /// @brief Longueur du c�t� du carr�.
    int cote;

public:
    /// @brief Constructeur par d�faut.
    CCarre();

    /// @brief Constructeur param�tr�.
    /// @param[in] sx1 Coordonn�e x du sommet sup�rieur gauche.
    /// @param[in] sy1 Coordonn�e y du sommet sup�rieur gauche.
    /// @param[in] cote1 Longueur du c�t� du carr�.
    CCarre(int sx1, int sy1, int cote1);

    /// @brief D�finit la coordonn�e x du sommet sup�rieur gauche.
    /// @param[in] sx1 Nouvelle valeur de la coordonn�e x.
    void Setsx(int sx1);

    /// @brief D�finit la coordonn�e y du sommet sup�rieur gauche.
    /// @param[in] sy1 Nouvelle valeur de la coordonn�e y.
    void Setsy(int sy1);

    /// @brief D�finit la longueur du c�t� du carr�.
    /// @param[in] cote1 Nouvelle longueur du c�t�.
    void Setcote(int cote1);

    /// @brief Affiche les caract�ristiques du carr�.
    void Afficher();

    /// @brief R�cup�re la coordonn�e x du sommet sup�rieur gauche.
    /// @param[out] Retourne la coordonn�e x actuelle.
    int Getsx();

    /// @brief R�cup�re la coordonn�e y du sommet sup�rieur gauche.
    /// @param[out] Retourne la coordonn�e y actuelle.
    int Getsy();

    /// @brief R�cup�re la longueur du c�t� du carr�.
    /// @param[out] Retourne la longueur actuelle du c�t�.
    int GetCote();

    /// @brief D�place le carr� dans une direction donn�e avec un saut.
    /// @param[in] direction Direction du d�placement ('N', 'S', 'E', 'O').
    /// @param[in] saut Distance du d�placement.
    void Deplacer(char direction, int saut);

    /// @brief D�place le carr� en utilisant un vecteur.
    /// @param[in] dx D�placement sur l'axe x.
    /// @param[in] dy D�placement sur l'axe y.
    void Deplacer(int dx, int dy);
};
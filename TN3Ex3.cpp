#include <iostream>
#include <cstdlib>

using namespace std;

class Noeud{

    private:
        int valeur;
        Noeud* suivant;

    public:
        // Constructor of the Noeud class.
        Noeud(int val) : valeur(val), suivant(0)
        {
        }

        // Method to read the value of the node.
        int getValeur() const
        {
            return this -> valeur;
        }

        // Method to write a value into the node.
        void setValeur(int val)
        {
            this -> valeur = val;
        }

        // Method to read the next node.
        Noeud* getSuivant() const
        {
            return this -> suivant;
        }

        // Method to set the next node.
        void setSuivant(Noeud* noeud)
        {
            this -> suivant = noeud;
        }

        // Method to add a node to the list.
        void ajouterNoeud(int val)
        {
            Noeud* courant = this;

            // Traverse to the end of the list.
            while (courant -> suivant != 0)
            {
                courant = courant -> suivant;
            }

            // Add the node to the end of the list.
            courant -> suivant = new Noeud(val);
        }

        // Method to display the list.
        void afficherListe() const
        {
            const Noeud* courant = this;
            while (courant != 0)
            {
                cout << courant -> valeur << "  ";
                courant = courant -> suivant;
            }
        }
};

int main() {

    // Fill the list with 20 random elements.
    Noeud* liste = new Noeud(rand() % 100);
    for (int i = 1; i < 20; ++i)
    {
        liste -> ajouterNoeud(rand() % 100);
    }

    // Display the list.
    cout << "Liste chaînée de 20 éléments aléatoires :" << endl;
    liste -> afficherListe();
    cout << endl;

    return 0;
}
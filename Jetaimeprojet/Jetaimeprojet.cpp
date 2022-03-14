// Jetaimeprojet.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

int main()
{
    std::cout << "\n\n\nYOU GONNA SPLIT BLOOD\n\nSPEW IT TOO\n\n\n\n";
    

    using namespace std;

    void Damage(int health) {
        health -= 2;
    }

    void DamageRefefrence(int& health) {
        health -= 2;
    }

    void DamagePointedObject(int* health) {
        *health -= 2;
    }

    int main()
    {
        cout << "\n\n\nYOU GONNA SPLIT BLOOD\n\nSPEW IT TOO\n\n\n\n";
        int life = 10;
        cout << "The value " << life << " is stroed at memory adress :" << &life << endl;
        



    }
}

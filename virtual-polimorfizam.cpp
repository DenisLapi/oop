#include <iostream>

class Voce {
    protected:
        int tezina;
    public: 
        virtual void jede() {
            std::cout << "Voce jede";
        }
};

class Breskva : public Voce {
    public:
        void jede() {
            std::cout << "Breskva jede";
        }
};

class Jabuka : public Voce {
    // Nema 'jede' metodu za sebe
};

int main() {

    Voce voce1;
    Breskva breskva;
    Voce *voce2 = &breskva;

    voce1.jede();
    voce2->jede();
    breskva.jede();

    // Kreiramo tip Jabuka koji nema 'jede' metodu
    Jabuka j;
    j.jede();

    return 0;
}
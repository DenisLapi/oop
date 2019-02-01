#include <iostream> 

// Polimorfizmi nam omogucuje da kreairamo jedan objekat koji je tip bazne klase, ali da ona pokazuje na deriviranu/nasledjenu klasu

class Voce {
    protected:
        int tezina;
    public: 
        int postavi_tezinu(int tezina) {
            this->tezina = tezina;
            std::cout << "Tezina je " << this->tezina;
            return this->tezina;
        }
};

class Jabuka : public Voce {
    public:
        void jede() {
            std::cout << "Jedemo jabuku";
        }
};

class Kruska : public Voce {
    public:
        void jede() {
            std::cout << "Jedemo krusku";
        }
};

int main() {

    Jabuka j;
    Kruska k;

    // Polimofrizam nastaje ovde
    Voce *voce1 = &j;

    voce1->postavi_tezinu(20);
    j.jede(); // Ovo ne mozemo da uradimo jer voce nema kao member 'jede' funkciju
    j.postavi_tezinu(33);
    return 0;
}
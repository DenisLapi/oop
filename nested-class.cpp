#include <iostream>

// Nested class je klasa koja je definisana unutar druge klase
// Nested class ima pristup private vrednostima parent  klase (Klase u kojoj se nalazi)
// Parent class nema prisput private vrednostima Nested klase. Potrebno je koristiti getter-e i setter-e

class ClassParent {
    private:
        int parentX;
    public:
        class classChild {
            private:
                int childX;
            public: 
                classChild() {}
                classChild(int val) {
                    this->childX = val;
                }
                int getChildX() {
                    return this->childX;
                }
        };
        ClassParent() {} 
        ClassParent(int value) {
            this->parentX = value;
        }
        // Kreiramo jedan objekat unutar parent klase koristeci child class
        classChild *dete = new classChild(55);
};

int main() {

    ClassParent *roditelj = new ClassParent(44);
    std::cout << "Dete od roditelja ima vrednost X: " << roditelj->dete->getChildX();

    return 0;
}
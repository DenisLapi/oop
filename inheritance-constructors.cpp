#include <iostream>

using namespace std;

class Figure {
    public:
        Figure() {
            cout << "\nFigure constuctor";
        }
        ~Figure() {
            cout << "\nFigure DEstructor";
        }
};

class Rectangle : public Figure {
    public: 
        Rectangle() {
            cout << "\nRectangle constuctor";
        }
        ~Rectangle() {
            cout << "\nRectangle DEstructor";
        }
};


int main()
{

    // Kada se kreira jedan objekat koristeci jednu deriviranu klasu prvo se pokrece 'constructor' bazne klase, a zatim 'constuctor' derivirane klase
    // Kada se unistava jedan objekat prvo se pokrece 'destructor' derivirane klase, a zatim 'destructor' bazne klase
    // Pokreni primer!
    Rectangle rect;
    return 0;
}

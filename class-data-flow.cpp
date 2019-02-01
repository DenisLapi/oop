#include <iostream>

using namespace std;

class Figure {
    public: 
        static int x;
        Figure() {
            cout << "\n(Before) Figure X: " << this->x;
            this->x += 50;
            cout << "\nFigure x: " << this->x;
        }
};

int Figure::x = 5;

class Box : public Figure {
    public:
        Box(int x) {
            this->x += x;
            cout << "\nBox x: " << this->x;
        }
};

int main()
{
    Box box(20);
    return 0;
}

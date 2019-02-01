#include <iostream>

class Box {
    private:
        int width;
        int height;
    public:
        Box() {}
        Box(int w, int h) {
            this->width  = w;
            this->height = h;
        }
        
        void showData() {
            std::cout << "Width: " << this->width << " | Height: " << this->height << std::endl;
        }

        // Overload of operator ++ (prefix)
        Box operator ++ () {
            Box newBox;
            newBox.width = this->width + 1;
            newBox.height = this->height + 1;
            return newBox;
        }

        // Overloading of operator ++ (postfix)
        Box operator ++ (int) {
            Box newBox;
            newBox.width = this->width + 1;
            newBox.height = this->height + 1;
            return newBox;
        }

        Box operator + (Box &box) {
            Box newBox;
            newBox.width = this->width + box.width;
            newBox.height = this->height + box.height;
            return newBox;
        }
};

int main() {

    Box boxOne(10, 15);
    Box boxTwo = ++boxOne;

    boxOne.showData();
    boxTwo.showData();

    Box boxThree = boxTwo++;
    boxThree.showData();

    Box boxFive = boxOne + boxThree;
    boxFive.showData();

    return 0;
}
#include <iostream>
#include <string>

/*
*   In this file we will create different types of constructors
*   Constustor types are:
*       default constructor      - Created by compiler, argument is type 'void' 
*       general constructor      -  Constructor with at least one argument
*       copy consturctor         - Constructor used to copy elements from other object
*       conversion constructor   - (Not readed yet)
*/

/*
    @title - Default constructor
    @brief - If an class doesn't have defined custom 'default' constructor. Compiler will create an for that class
*/

class Box {
    public:
        Box() {
            std::cout << "Default constructor | No arguments" << std::endl;
        }
};

/*
    @title - General constructor
    @brief - This type of constructor has at least one argument
*/

class User {
    private: 
        int age;
    public: 
        User(int age) {
            this->age = age;
            std::cout << "\nGeneral constructor | Age: " << this->age; 
        }
};

/*
    @title - Copy constructor
    @brief - This kind of constructor is used to copy values from an object to other
             If is not defined, complier will create an copy constructor for us
             Custom 'copy constructor' as first argument in the constructor function has itself class type variable provided as reference
*/

class House {
    private:
        int noMembers;
        std::string location;
    public:
        House(int noMembers, std::string location) {
            this->noMembers = noMembers;
            this->location = location;
        }
        House(const House &house) {
            this->noMembers = house.noMembers;
            this->location = "Fake location";
            std::cout << "\nCopy constructor for House class";
        }
        void getData() {
            std::cout << "\nNo members: " << this->noMembers << " | Location: " << this->location;
        }
};

/*
    @title - Conversion constructor
    @brief -  Constructor which can be called with and argument
*/

class Car {
    private:
        int age;
        int speed;
    public:
        Car(int age) {
            this->age = age;
            std::cout << "\nConstructor with one argument";
        }
        Car(int age, int speed) {
            this->age = age;
            this->speed = speed;
            std::cout << "\n Constructor with two arguments";
        }
        void getData() {
            std::cout << "AGE: " << this->age << " | SPEED: " << this->speed;
        }
};

int main() {

/*
    // Default constructor (no agruments)
    Box box;

    // General constructor (at least one argumet passed)
    User *user = new User(20);

    // Copy constructor
    House houseOne(22, "Strada Tehnicii");

    House houseTwo = houseOne; // Here is copy constuctor called
    houseTwo.getData();

*/

    // Conversion constuctor
    Car carOne = 1;
    carOne.getData();

    Car carTwo = {44, 250};
    carTwo.getData();

    Car carThree = {100, 300};
    carThree.getData();


    return 0;
}
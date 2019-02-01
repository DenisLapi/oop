#include <iostream>

/*
    @title      - Composition
    @brief      - When we think about the compound class and composition we can think about the Car and what car have as objects inside
    @warning    - COMPOSITION is defined using the keywords 'has a'. 
                 
    Think about car about the compound class with a objects inside (real world example)
    Car 'HAS A' engine 
    CAS 'HAS A' wheels
    CAR 'HAS A' radio
    CAR 'HAS A' key

    Example of compound class below:

*/

// 1) Lets first define some objects for an car
class Engine {
    public:
        int power;
};

class Wheels {
    public: 
        int size;
};

class Radio {
    public: 
        std::string song;
};

class Key {
    private: 
        int serialNumber;
    public:

        // Because 'serialNumber' is a 'private' we can't access it directly out of the 'Key' class 
        // We created this 'public' function which return as the serial number of the car
        int getSerial() {
            return this->serialNumber;
        }

        void setSerialNumber(int serialNumber) {
            this->serialNumber = serialNumber;
        }
};

// 2) Now when we have objects create for an car we can add it inside the car (Same as in real world. We will create a car using other objects)
class Car {
    private:
        int age;
        Key key;
    public:

        // In this way we will add objects inside the car defining them as a public
        // NOTE: We can define them as a private too. But we will need public functions to access them out of the base class
        Engine engine; 
        Wheels wheels;
        Radio radio;

        // Becouse 'key' is defined as private. We can not access it out of the class.
        // We will define a function to access the value of key
        void showKeySerialNumber() {
            std::cout << this->key.getSerial();
        }

        // We will create a 'general' constuctor to initialize our object values
        Car(int power, int size, std::string song, int serialNumber) {
            this->engine.power = power;
            this->wheels.size = size;
            this->radio.song = song;
            this->key.setSerialNumber(serialNumber);
        }

        // Get the info about the car
        void getInfo() {
            std::cout << "\nCar HAS A engine with POWER: " << this->engine.power;
            std::cout << "\nCar HAS A wheels with SIZE: " << this->wheels.size;
            std::cout << "\nCar HAS A radio with SONG: " << this->radio.song;
            std::cout << "\nCar HAS A key with SERIAL NUMBER: " << this->key.getSerial();
        }   

};

int main() {

    Car *audi = new Car(1800, 16, "The Eagles - Hotel California", 1997);
    audi->getInfo();
    return 0;
}

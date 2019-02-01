#include <iostream>

class Computer;

class User {
    private: 
        std::string password;
    public:
        User(std::string password) {
            this->password = password;
        }
        friend Computer;
};

class Computer {
    private:
        std::string name;
    public:
        Computer(std::string name) {
            this->name = name;
        }
        std::string getPassword(User &user) {
            return user.password;
        }
};

int main() {

    User userOne("test123");
    Computer dell("DELL");

    std::cout << "Computer DELL user password is: " << dell.getPassword(userOne);

    return 0;
}
#include <iostream>

class User {
    private:
        std::string password;
    public:
        User(std::string password) {
            this->password = password;
        }

        // Friend funkcija koja je definisana globalno, ali je deklarisana unutar ove klase kao friend
        friend std::string getPassword(User &user);
};

std::string getPassword(User &user) {
    return user.password;
}

int main() {

    User user("testpassword");
    std::cout << "Password : " << getPassword(user);

    return 0;
}
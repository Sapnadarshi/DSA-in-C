#include <iostream>
#include <string>

class SString {
private:
    std::string str;

public:
    // Non-parameterized constructor
    SString() {
        str = "";
    }

    // Parameterized constructor
    SString(const std::string& s) {
        str = s;
    }

    // Copy constructor
    SString(const SString& other) {
        str = other.str;
    }

    // Basic data type to ADT conversion
    std::string toString() const {
        return str;
    }
};

int main() {
    SString s1; // Non-parameterized constructor
    SString s2("Hello"); // Parameterized constructor
    SString s3 = s2; // Copy constructor

    std::cout << "s1: " << s1.toString() << std::endl;
    std::cout << "s2: " << s2.toString() << std::endl;
    std::cout << "s3: " << s3.toString() << std::endl;

    return 0;
}

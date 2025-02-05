#include <iostream>
#include <cstring>

class SString {
private:
    char* str;

public:
    SString();
    SString(const char* s);
    SString(const SString& other);
    ~SString();

    bool operator<(const SString& other) const;
    bool operator==(const SString& other) const;
    bool operator>(const SString& other) const;
};

SString::SString() : str(nullptr) {}

SString::SString(const char* s) {
    str = new char[strlen(s) + 1];
    strcpy(str, s);
}

SString::SString(const SString& other) {
    str = new char[strlen(other.str) + 1];
    strcpy(str, other.str);
}

SString::~SString() {
    delete[] str;
}

bool SString::operator<(const SString& other) const {
    return strcmp(str, other.str) < 0;
}

bool SString::operator==(const SString& other) const {
    return strcmp(str, other.str) == 0;
}

bool SString::operator>(const SString& other) const {
    return strcmp(str, other.str) > 0;
}

int main() {
    SString str1("hello");
    SString str2("world");

    if (str1 < str2) {
        std::cout << "str1 is less than str2" << std::endl;
    } else if (str1 == str2) {
        std::cout << "str1 is equal to str2" << std::endl;
    } else {
        std::cout << "str1 is greater than str2" << std::endl;
    }

    return 0;
}


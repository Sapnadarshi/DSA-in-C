#include <iostream>
#include <cstring>

class SString {
private:
    char* str;
    int length;

public:
    SString() : str(nullptr), length(0) {}
    
    SString(const char* s) {
        length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }
    
    SString(const SString& other) {
        length = other.length;
        str = new char[length + 1];
        strcpy(str, other.str);
    }
    
    SString operator+(const SString& other) {
        SString newString;
        newString.length = length + other.length;
        newString.str = new char[newString.length + 1];
        strcpy(newString.str, str);
        strcat(newString.str, other.str);
        return newString;
    }
    
    bool operator<(const SString& other) {
        return strcmp(str, other.str) < 0;
    }
    
    bool operator==(const SString& other) {
        return strcmp(str, other.str) == 0;
    }
    
    bool operator>(const SString& other) {
        return strcmp(str, other.str) > 0;
    }
    
    operator const char*() const {
        return str;
    }
    
    ~SString() {
        delete[] str;
    }
};

int main() {
    SString str1("Hello");
    SString str2("World");
    
    SString concatenated = str1 + str2;
    
    if (str1 < str2) {
        std::cout << str1 << " is less than " << str2 << std::endl;
    } else if (str1 == str2) {
        std::cout << str1 << " is equal to " << str2 << std::endl;
    } else {
        std::cout << str1 << " is greater than " << str2 << std::endl;
    }
    
    return 0;
}


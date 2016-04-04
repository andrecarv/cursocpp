#include <iostream>
#include <string>

int main(){
    int year = 2016;
    unsigned int age = 24;

    std::string name = "André";

    std::cout << "Hello, " << name << ". I see you were born in "
        << year - age << "!\n";

    return 0;
}

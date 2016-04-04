#include <iostream>
#include <string>

int main(){
    auto year = 2016;
    auto age = 24;

    auto name = std::string("André");

    std::cout << "Hello, " << name << ". I see you were born in "
        << year - age << "!\n";

    return 0;
}

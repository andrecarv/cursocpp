#include <iostream>
#include <string>

int main(){
    auto grade = 0.0;

    if(grade < 5.75)
        std::cout << "You shall not pass!\n";
    else if (grade < 8.0)
        std::cout << "Yeah, you passed...\n";
    else
        std::cout << "That\'s a good grade bitch!\n";
    return 0;
}

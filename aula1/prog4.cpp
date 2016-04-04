#include <iostream>
#include <string>

int main(){
    auto old = 0.0;
    auto guess = 1.0;
    auto n = 64.0;

    while (guess != old){
        old = guess;
        guess = (guess + n/guess)/2;
    }

    std::cout << guess << "\n";

    return 0;
}

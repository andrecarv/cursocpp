#include <iostream>
#include <cmath>

namespace my_math {
double sqrt(double n) {
    auto old = 0.0;
    auto guess = 1.0;

    while (old != guess){
        old = guess;
        guess = (guess + n / guess) / 2;
    }
    return guess;
}
double power(double base, unsigned exponent){

    auto answer = 1.0;

    for(auto i = 0; i < exponent; i++) {
         answer *= base;
    }

    return answer;
}
}
namespace recursive {
    double power(double base, unsigned long exponent) {
        if (exponent == 0){
            return 1;
        }

        auto half = recursive::power(base, exponent/2);

        auto result = half * half;

        if (exponent % 2 == 1){
             result *= base;
        }

        return result;
    }

}



int main(){
    std::cout << "sqrt(42): " << sqrt(42) << "\n";
    std::cout << "my_math::sqrt(42): " << my_math::sqrt(42) << "\n";
    std::cout << "my_math::power(23, 4): " << my_math::power(23,4) << "\n";
    std::cout << "recursive::power(23,4): " << recursive::power(23,4) << "\n";
    return 0;
}

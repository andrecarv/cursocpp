#include <iostream>
#include <string>
#include <vector>

#define n "\n"

int main(){
    auto inteiros = std::vector<double>();

    for (auto i = 0; i < 10; i++) {
        inteiros.push_back(i);
    }

    std::cout << "front is: " << inteiros.front();
    std::cout << "back is: " << inteiros.back();

    for (auto i:inteiros) {
        std::cout << i << n;
    }

    std::cout << "Tamanho do vector inteiros: " << inteiros.size() << n;

    for(auto i = 0;i<10;i++){
        std::cout << "tamanho de inteiros: " << inteiros.size() << n;
        std::cout << "front is: " << inteiros.front() << n;
        std::cout << "back is: " << inteiros.back() << n;
        inteiros.pop_back();
    }

    std::cout << "inteiros[15]" << inteiros[15] << n;
    std::cout << "inteiros.at(15)" << inteiros.at(15) << n;

    return 0;
}

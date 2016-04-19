#include <iostream>

#include "prog2.h"

int main(){
    using std::cout;
    using namespace strings;
    auto fibs = fibo::to_n(10);
    for (auto i:fibs){
        cout << i << ", ";
    }
    cout << "\n";

    fibs = fibo::to_max(10000);
    for(auto i:fibs){
        cout << i << ", ";
    }
    cout << "\n";

    cout << is_palindrome("socorrammesubinoonibusemmarrocos") << "\n";
    cout << is_palindrome("peixe") << "\n";

    return 0;
}

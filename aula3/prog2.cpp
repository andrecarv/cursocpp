#include "prog2.h"

std::vector<unsigned int> fibo::to_n(unsigned int n){
    auto fibs = std::vector<unsigned int>();

    auto f1 = 1u;
    auto f2 = 1u;

    for (auto i = 0; i < n; i++){
        fibs.push_back(f1);
        auto aux = f1;
        f1 = f2;
        f2 += aux;
    }
    return fibs;
}

std::vector<unsigned int> fibo::to_max(unsigned int max){
     auto fibs = std::vector<unsigned int>();

     auto f1 = 1u;
     auto f2 = 1u;

     while (f1 <= max){
          fibs.push_back(f1);
          auto aux = f1;
          f1 = f2;
          f2 += aux;
     }
     return fibs;
}

namespace strings {

    bool is_palindrome(const std::string &s){
        auto i  = s.size() - 1;

        for (auto j = 0u; j < s.size()/2; ++j){
            if (s[j] != s[i]){
                return false;
            }
            --i;
        }
        return true;
    }
}

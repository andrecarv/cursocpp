#ifndef EXAMPLE_FUNCTION_H
#define EXAMPLE_FUNCTION_H

#include <vector>
#include <string>

namespace fibo {
    std::vector<unsigned int> to_n(unsigned int n);
    std::vector<unsigned int> to_max(unsigned int n);
}

namespace strings {

    bool is_palindrome(const std::string &s);
}

#endif

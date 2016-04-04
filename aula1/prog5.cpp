#include <iostream>
#include <string>
#include <vector>

int main(){
    auto grades = std::vector<double>{9.0,8.0,4.0};
    {
        auto sum = 0.0;
        auto n = grades.size();
        for (auto i = 0u; i < n; ++i)
            sum += grades[i];
        std::cout << sum / n << "\n";
    }

    {
        auto sum = 0.0;
        auto n = grades.size();
        for(auto i: grades)
            sum += i;
        std::cout << sum/n << "\n";
    }
    return 0;
}

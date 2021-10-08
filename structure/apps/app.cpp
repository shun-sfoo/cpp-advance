#include <modern/lib.hpp>

#include <iostream>
#include <vector>
#include <tuple>

int main() {
    std::vector<double> input = {1.2, 2.3, 3.4, 4.5};

    auto [mean, moment] = accumulate_vector(input);

    std::cout << "Mean: " << mean << ", Moment: " << moment;

    return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>

template<typename T>
std::vector<T> count(const std::vector<T> & container) {
    std::vector<T> containerSet;

    for (auto element : container) {
        auto it = find(containerSet.begin(), containerSet.end(), element);
        if (it == containerSet.end())
            containerSet.push_back(element);
    }

    return containerSet;
}


int main()
{
    std::vector<std::string> test_vector = { "kim", "lee", "kim", "kim", "choi", "Hwang"};
    std::vector<std::string> ret = count(test_vector);
    for (auto word : ret) {
        std::cout << word << std::endl;
    }

}

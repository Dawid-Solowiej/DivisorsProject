#include <iostream>
#include <vector>
#include "../DivisorsLib/Divisors.h"

// Funkcja testująca
void test_divisors(unsigned long long number, const std::vector<unsigned long long>& expected) {
    std::vector<unsigned long long> result = divisors(number);
    if (result == expected) {
        std::cout << "Test passed for number: " << number << std::endl;
    } else {
        std::cout << "Test failed for number: " << number << std::endl;
        std::cout << "Expected: ";
        for (auto v : expected) std::cout << v << " ";
        std::cout << "\nGot: ";
        for (auto v : result) std::cout << v << " ";
        std::cout << std::endl;
    }
}

int main()
{
    // Testy jednostkowe
    test_divisors(1, {1});
    test_divisors(2, {1,2});
    test_divisors(3, {1,3});
    test_divisors(4, {1,2,4});
    test_divisors(5, {1,5});
    test_divisors(6, {1,2,3,6});
    test_divisors(9, {1,3,9});
    test_divisors(10, {1,2,5,10});
    test_divisors(13, {1,13});
    test_divisors(28, {1,2,4,7,14,28});
    test_divisors(100, {1,2,4,5,10,20,25,50,100});
    return 0;
}

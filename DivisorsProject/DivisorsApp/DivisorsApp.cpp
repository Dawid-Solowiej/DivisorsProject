#include <iostream>
#include <vector>
#include <chrono>
#include <iomanip>
#include "../DivisorsLib/Divisors.h"
#include "../benchmark/benchmark.h"

int main()
{
    unsigned long long number = 0ULL;
    do
    {
        std::cout << "Number:";
        std::cin >> number;

        if (number == 0) break;

        Benchmark<std::chrono::milliseconds> benchmark;

        std::vector<unsigned long long> result = divisors(number);

        auto t = benchmark.elapsed();

        std::cout << "\n" << number << " divisors (" << result.size() << ", ";
        std::cout << t / 1000 << "." << std::setw(3) << std::setfill('0') << t % 1000 << std::setfill(' ');
        std::cout << "s):\n";

        // Opcjonalnie wyświetl dzielniki
        /*
        for (size_t i = 0; i < result.size(); ++i)
        {
            if (i > 0)
                std::cout << ",";
            std::cout << result[i];
        }
        std::cout << "\n";
        */

    } while (number > 0);

    return 0;
}

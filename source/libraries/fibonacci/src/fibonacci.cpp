#include "fibonacci.hpp"

int fibonacci_recursive(const int value)
{
    if (value < 2)
        return value;
    return fibonacci_recursive(value - 1) + fibonacci_recursive(value - 2);
}

int fibonacci_iterative(const int value)
{
    int prev = 0, curr = 1;
    for (int i = 0; i < value; ++i) {
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    return prev;
}

#include "Span.hpp"
#include <iostream>

int main() {
    {
        std::cout << "======= SIMPLE TEST ======" << std::endl;
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        std::cout << std::endl << "======= Try to add member in a full class ======" << std::endl;
        try {
            sp.addNumber(12);
        }
        catch (std::exception &e) {
            std::cout << "ERROR!!! " << e.what() << std::endl;
        }

    }

    {
        std::cout << std::endl << "======= Class whith one member ======" << std::endl;
        Span sp = Span(5);

        sp.addNumber(10);
        std::cout << std::endl << "======= Try to print the shortest ======" << std::endl;
        try {
            std::cout << sp.shortestSpan() << std::endl;
        }
        catch (std::exception &e) {
            std::cout << "ERROR!!! " << e.what() << std::endl;
        }

        std::cout << std::endl << "======= Try to print the longest ======" << std::endl;
        try {
            std::cout << sp.longestSpan() << std::endl;
        }
        catch (std::exception &e) {
            std::cout << "ERROR!!! " << e.what() << std::endl;
        }
    }

    {
        std::cout << std::endl << "======= Add whit iterators ======" << std::endl;
        
        int arr[] = { 42, 2, 34, 6, 77 };
        int n = sizeof(arr) / sizeof(arr[0]);

        std::vector<int> newVector(arr, arr + n);
        Span sp = Span(5);

        std::cout << std::endl << "======= Try to add iterators ======" << std::endl;
        try {
            sp.addNumber(newVector.begin(), newVector.end());
        }
        catch (std::exception &e) {
            std::cout << "ERROR!!! " << e.what() << std::endl;
        }

        std::cout << std::endl << "======= Try to print the shortest ======" << std::endl;
        try {
            std::cout << sp.shortestSpan() << std::endl;
        }
        catch (std::exception &e) {
            std::cout << "ERROR!!! " << e.what() << std::endl;
        }

        std::cout << std::endl << "======= Try to print the longest ======" << std::endl;
        try {
            std::cout << sp.longestSpan() << std::endl;
        }
        catch (std::exception &e) {
            std::cout << "ERROR!!! " << e.what() << std::endl;
        }
    }
    return (0);
}

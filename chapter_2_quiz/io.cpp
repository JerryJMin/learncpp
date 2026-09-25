#include <iostream>

int read_number() {
    std::cout << "Enter an integer: ";

    int x;
    std::cin >> x;
    return x;
}

void write_answer(int n) {
    std::cout << "Your value is " << n << "\n";
}

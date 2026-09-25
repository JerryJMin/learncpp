#include <iostream>

// # define PROMPT

void print_carrot() {
    std::cout << "Carrot! \n";
}


int main() {

    int num {};

#ifdef PROMPT
    std::cout << "Enter an integer: ";
#endif
    std::cin >> num;

    std::cout << "Double " << num << " is " << num * 2 << '\n';
    std::cout << "Triple " << num << " is " << num * 3 << '\n';

    print_carrot();
    return 0;
}

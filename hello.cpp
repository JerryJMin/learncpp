#include <iostream>

void print_add(int, int);
int return_5();


int main() {
    std::cout << return_5();
    
    return 0;
}

int return_5() {

    print_add(5, 6);
    return 5;
}

void print_add(int n, int y) {
    std::cout << n+y << '\n';
}

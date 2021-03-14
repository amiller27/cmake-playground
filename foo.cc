#include <iostream>

int foo(int x) {
    return x + 1;
}

int main() {
    const int x = 5;
    std::cout << foo(x) << std::endl;
}

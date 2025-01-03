#include <iostream>

// first namespace
namespace first {
    int x = 1;
}

// second namespace
namespace second {
    int x = 2;
}
int main() {
    // local namespace
    int x = 0;

    std::cout << "local x: " << x << std::endl;
    std::cout << "first namespace first::x: " << first::x << std::endl;
    std::cout << "second namespace second::x: " << second::x << std::endl;
}
#include <iostream>

// first namespace
namespace first {
    int x = 1;
}
namespace second {
    int x = 2;
}

int main() {
    using namespace first;
    
    std::cout << "local x: " << x << std::endl;
    std::cout << "second namespace second::x: " << second::x << std::endl;
    return 0;
}
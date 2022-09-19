#include <iostream>
#include <cmath>

int main() {
    std::cout << "Hello, Earth!\n";
    double x = 0.0;
    for (int i=1; i<10; x+=.001, ++i) {
        std::cout << x << " ,"<< sin(x) << "\n";
    }
}

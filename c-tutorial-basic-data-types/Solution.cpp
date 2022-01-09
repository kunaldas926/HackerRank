#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;
    std::cin >> a >> b >> c >> d >> e;
    std::cout << a << std::endl << b << std::endl << c << std::endl << std::fixed << std::setprecision(3) << d << std::endl << std::fixed << std::setprecision(9) << e;
    return 0;
}

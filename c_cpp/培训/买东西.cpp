#include <iostream>  

int main() {
    int a, b;
    std::cin >> a >> b;

    int ALL = a * 10 + b;

    int jiage = 19;

    int max = ALL / jiage;

    std::cout << max << std::endl;

    return 0;
}
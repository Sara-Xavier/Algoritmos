#include <iostream>
#include <iomanip>

int main(){
    float diametro;
    std::cin >> diametro;
    float r = diametro / 2;
    float area = 3.14159 * r * r;
    std::cout << std::fixed << std::setprecision(5) << area << std::endl;
    return 0;
}

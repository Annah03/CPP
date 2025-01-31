//write a program that can take input and calculate the hypotenuse
#include <iostream>
#include <cmath>

//define variables
double a, b, c;
int main(){
std::cout << "What is the value of a?"<<std::endl;
std::cin >> a;
std::cout << "What is the value of b?"<<std::endl;
std::cin >> b;
c = pow(a,2) + pow(b,2);
c = sqrt(c);
std::cout << "The hypotenuse is " << c << std::endl;
return 0;
}
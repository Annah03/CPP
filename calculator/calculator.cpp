#include <iostream>

int main(){
    char op;
    double num1, num2, out;
    std::cout << "Enter the operation you would like: " << std::endl;
    std::cin >> op;
    std::cout << "Enter the first number:" << std::endl;
    std::cin >> num1;
    std::cout << "Enter the second number:" << std::endl;
    std::cin >> num2;
    switch(op){
        case '+' : out = num1 + num2; break;
        case '-' : out = num1 - num2;break;
        case '*' : out = num1*num2;break;
        case '/' : out = num1/num2;break;
        default : out = 0;
                  std::cout << "Please enter \"add, subtract, multiply, or divide\" " << std::endl;
                  break;
        }
    std::cout << "The result is " << out << std::endl;
}
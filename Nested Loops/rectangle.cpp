#include <iostream>
//program that user can specify rows and columns
int main(){
    int i, j;
    std::cout << "Enter the number of rows:" << std::endl;
    std::cin >> i;
    std::cout << "Enter the number of columns" << std::endl;
    std::cin >> j;
    for (int k=1; k<= i; k++){
        for (int m=1; m<=j; m++){
            std::cout << m << " ";
        }
        std::cout << std::endl; //new line at the end
    }
}
#include <iostream>

int main(){
    char temp; //temp want to convert to
    double val, conv; //temp value
    std::cout << "Enter which degree you want to convert to (C or F)" << std::endl;
    std::cin >> temp;
    switch(temp){
        case 'C': 
                std::cout << "Enter the temperature ";
                std::cin >> val;
                conv = (val-32)*5/9-32;
                std::cout << "Temp is " << conv << "C"; break;
        case 'F': 
            std::cout << "Enter the temperature ";
            std::cin >> val;
            conv = val*(9/5)+32;
            std::cout << "Temp is " << conv << "F"; break;
        default: std::cout <<"Enter either C or F";break;
    }
}
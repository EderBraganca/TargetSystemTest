#include <iostream>
#include <string>

int main(){
    std::string n;
    int temp;

    std::cout << "Digite sua string: ";
    std::getline(std::cin, n);

    std::cout << "Sequencia invertida: ";

    for(int i = n.size()-1; i >= 0; i--){
        std::cout << n[i];
    }

    return 0;
}
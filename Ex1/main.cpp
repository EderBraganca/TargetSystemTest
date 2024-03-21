#include <iostream>

int main(){
    int index = 13, sum = 0, k = 0;

    while( k < index) {
        k++;
        sum = sum + k;
    }

    std::cout << (sum);

    return 0;
}
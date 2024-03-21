#include <iostream>

int main(){
    int fib = 0, n;

    std::cout << "Digite o numero que deseja verificar: ";
    std::cin >> n;
    
    if(n < 0){
        std::cout << "Numero invalido";
    }else if(n == 0){ 
        std::cout << "Pertence a sequencia de Fibonacci";
    }else if(n == 1){
        std::cout << "Pertence a sequencia de Fibonacci";
    }else{
        int a = 0, b = 1;
        while(fib < n){
            fib = a + b;
            a = b;
            b = fib;
        }
        if(fib == n){
            std::cout << "Pertence a sequencia de Fibonacci";
        }else{
            std::cout << "Nao pertence a sequencia de Fibonacci";
        }
    }

    return 0;
}
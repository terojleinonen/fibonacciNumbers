#include <iostream>
#include "printFibonacciNumbersOnScreen.hpp"

int main(){

    countFibonacciNumbers::solutions fibonacci;
    fibonacci.callPrintOnScreen(9);
    fibonacci.callContainerPrintOnScreen(9);
    fibonacci.callRecursivePrintOnScreen(9);
    
    return 0;
}
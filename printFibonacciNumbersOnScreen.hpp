#include <algorithm>
#include <iostream>
#include <vector>
#ifndef printFibonacciNumbersOnScreen_hpp
#define printFibonacciNumbersOnScreen_hpp
namespace countFibonacciNumbers{    
    class solutions{
        private:

        void recursivePrintOnSCreen(int quantity, uint64_t newValue = 1, uint64_t oldValue = 0){
            std::cout << oldValue  <<  "\n";
            if (quantity > 0) recursivePrintOnSCreen(quantity - 1, newValue + oldValue, newValue);
        }

        void containerPrintOnSCreen(int quantity){
            std::vector<uint64_t> fibonacciNumbers;

            for(int i = 0; i < quantity; ++i) {
                (i < 2) ? 
                    fibonacciNumbers.push_back(i): 
                    fibonacciNumbers.push_back(fibonacciNumbers[i-1] + fibonacciNumbers[i-2]);

                std::cout << fibonacciNumbers[i] << "\n"; 
            }      
        }
            
        void printOnScreen(int quantity){
            uint64_t oldValue = 0;
            uint64_t newValue = 1;
        
            for (int i = 0; i < quantity; ++i) {         
                newValue = newValue + oldValue;
                std::swap(oldValue , newValue);
                std::cout << newValue <<  "\n";  
            }
        }

        public:
        void callRecursivePrintOnScreen(int quantity){ recursivePrintOnSCreen(quantity); }
        void callContainerPrintOnScreen(int quantity){ containerPrintOnSCreen(quantity); }
        void callPrintOnScreen(int quantity){ printOnScreen(quantity); }
        ~solutions(){}
    };
}
#endif
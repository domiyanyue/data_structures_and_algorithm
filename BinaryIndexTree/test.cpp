#include "bit.h"
#include <iostream>

int main() {
    BIT bit(100);
    
    for(int i = 0; i < 100; i++) {
        bit.update(i, i + 1);
    }

    for(int i = 0; i < 100; i++) {
        std::cout << "sum " << i << " " << bit.getSum(i) << "\n";
    }

    return 0;
}
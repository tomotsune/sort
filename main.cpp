#include <iostream>
#include <iomanip>
#include "sort.h"
int main() {
    int a[]{1,3,5,8,2};
    tomo::quick_sort<int>(a,0,4);
    for (const auto &item : a) {
        std::cout<<std::setw(3)<<item;
    }
    return 0;
}

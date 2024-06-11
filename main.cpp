#include <iostream>
#include <thread>

#include "leetcode/Solutions.h"




int main() {
    Solutions *solutions = new Solutions();
    vector<int> *nums = new vector<int>();
    int array[] = {1,2,2,3,4};
    int arraySize = 5;
    for (int i = 0; i < arraySize; ++i) {
        nums->push_back(array[i]);
    }

    solutions->removeElement(*nums,2);
//    solutions->merge();
}




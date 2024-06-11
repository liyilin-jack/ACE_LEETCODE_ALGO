//
// Created by Jacklee on 1/31/2024.
//

#ifndef DSA_SORTUTILS_H
#define DSA_SORTUTILS_H
#include <vector>
using namespace std;

class SortUtils {

public:
    static void selectionSort(int *data,int size);
    static void insertionSort(int *data,int size);
    static void mergeSort(vector<int>& data);
    static void quickSort(vector<int>& data);
};


#endif //DSA_SORTUTILS_H

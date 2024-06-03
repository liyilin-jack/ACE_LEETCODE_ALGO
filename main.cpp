#include <iostream>
#include <thread>
#include "detect/DetectManager.h"

int main() {
    DetectManager *m1 = new DetectManager();
    DetectManager *m2 = new DetectManager();
    DetectManager *m3 = new DetectManager();
    m1->startDetect();
    m2->startDetect();
    m3->startDetect();
    m1->getThread()->join();
    m2->getThread()->join();
    m3->getThread()->join();
    return 0;
}

int copyData(int *src,int *dst,int size ){
    int *copyData = new int[size];
    memcpy(copyData,dst,size);
}




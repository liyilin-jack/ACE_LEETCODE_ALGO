//
// Created by Jacklee on 1/31/2024.
//

#include "SortUtils.h"

void merge(vector<int>& data,int left, int mid, int right){
    // 开辟一个空间，用于拷贝[left,right] 部分的元素
    vector<int> copyArray(right-left +1);
    // 遍历原数据data[left,right],拷贝到临时数组中
    for (int i = left; i <=right; ++i) {
        copyArray[left-i] = data[i];
    }
    int i = left; // 临时数组 左半部分起始位置偏移指针
    int j= mid +1; // 临时数组 右半部分起始位置的偏移指针
    for (int k = 0; k <= right; ++k) {
        if (i > mid){ //左半部分遍历结束
            data[k] = copyArray[j -left];
            j++;
        }else if (j > right){ //右半部分半部分遍历结束
            data[k] = copyArray[i -left];
            i++;
        }else if (copyArray[i] < copyArray[j]){
            data[k] = copyArray[i-left];
            i++;
        }else {
            data[k] = copyArray[j-left];
            j++;
        }
    }
}

void mergeSortInner(vector<int>& data,int left,int right){
    if (left>=right) return;// 只有一个元素时出递归
    int mid = (left + right )/2; //将数据从中间位置非为两部分
    mergeSortInner(data,left,mid); //对左半部分进行归并
    mergeSortInner(data,mid+1,right);// 对右半部分进行归并
    merge(data,left,mid,right); // 将两个有序数组合并为一个有序数组
}


void SortUtils::mergeSort(vector<int> &data) {
    mergeSortInner(data,0,data.size());
}


int partition(vector<int>& data,int left,int right){
    int p = left; //设置标定点为left索引处元素指针
    // TODO
}



void quickSortInner(vector<int>& data,int left,int right){
    if (left>=right)return;

    int p = partition(data,left,right); // 返回一个索引，p左侧的小于它，p右侧的大于它
    quickSortInner(data,left,p-1); //标定点左侧继续递归，进行partition
    quickSortInner(data,p+1,right); //标定点右侧继续递归，进行partition
}

void SortUtils::quickSort(vector<int> &data) {
    quickSortInner(data,0,data.size());
}


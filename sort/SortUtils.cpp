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

/**
 * 把整个数组分成两部分，索引p处左侧的元素小于该元素，右侧的元素大于该元素
 * @param data
 * @param left
 * @param right
 * @return p 左侧的元素小于data[p],右侧的元素大于data[p]
 */
int partition(vector<int>& data,int left,int right){
    int v = data[left]; // 标定点的元素值
    int j = left;
    //  i  // 大于标定点的索引
    //[ 4 1 5 3 7 6 ]
    //  j // 大于标定点的索引，初始值为left，用于分隔小于v和大于v的部分
    // data[left+1,j] < v; data[j+1,i-1] > v
    for (int i = left+1; i <=right; ++i) {
        if (data[i] < v){
            swap(data[j+1],data[i+1]);
            j++;
        }
        // 大于的情况下只需要i++即可，在循环条件上已有索引i++逻辑
    }
    swap(data[left],data[j]);
    return j;
}


/**
 * 对数组data[left,right] 进行快速排序
 * @param data
 * @param left
 * @param right
 */
void quickSortInner(vector<int>& data,int left,int right){
    if (left>=right)return;

    int p = partition(data,left,right); // 返回一个索引，p左侧的小于它，p右侧的大于它
    quickSortInner(data,left,p-1); //标定点左侧继续递归，进行partition
    quickSortInner(data,p+1,right); //标定点右侧继续递归，进行partition
}

void SortUtils::quickSort(vector<int> &data) {
    quickSortInner(data,0,data.size());
}


//
// Created by Jacklee on 2024/6/4.
//

#include "Solutions.h"

/**
 * TODO judgement for cases
 * @param word1
 * @param word2
 * @return
 */
string Solutions::mergeAlternately(string word1,string word2) {
    auto resultSize = word1.size() + word2.size();
    if(word1.empty() && word2.empty()){
        return word1;
    }
    if(word1.empty()){
        return word2;
    }
    if(word2.empty()){
        return word1;
    }
    std::string result;
    int i = word1.size(); // left elements in word1
    int j  = word2.size(); // left elements in word2
    int k = 0; //
    while(k<resultSize){
        if(i-->0){
            result += word1[k++];
        }
        if(j-->0){
            result += word1[k++];
        }
    }
    return result;
}

string Solutions::gcdOfStrings(std::string str1, std::string str2) {

}

// TODO judgment
vector<bool> Solutions::kidsWithCandies(vector<int> &candies, int extraCandies) {
    // add extraCandies to candies[i], to see if the number is the max one
    vector<bool> *result = new vector<bool>(candies.size());
    if (candies.size()==0)return *result;
    int greatestCandies = 0;
    for (int i = 0; i< candies.size();++i){
        if (candies[i]>greatestCandies){
            greatestCandies = candies[i];
        }
    }
    for (int i = 0; i < result->size(); ++i) {
        if (candies[i]+extraCandies>=greatestCandies){
            result->push_back(true);
        }else{
            result->push_back(false);
        }
    }
    return *result;
}

bool Solutions::canPlaceFlowers(vector<int> &flowerbed, int n) {
    if (n==0)return true;
    // calculate how many flower can place
    // use three pointer to compare if the i can plant flower
    int i = 0;
    int j = i-1;
    int k = i+1;
    for (int i = 0; i < flowerbed.size(); ++i) {

    }
}

void Solutions::merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    //           i     k
    // num1 [1,2,3,0,0,0]
    // num2 [2,4,6]
    //           j
    // because nums1 and nums2 are sorted none decreasing order array
    // so the end index is the biggest one
    // compare them and put into the last one
    int i = m -1; // nums1 index
    int j = n -1; // num2 index
    int k = n + m - 1; // nums1 last index
    while(j>=0){
        if (i >=0 && nums1[i] > nums2[j]){
            nums1[k--] = nums1[i--];
        }else{
            nums1[k--] = nums2[j--];
        }
    }

}

int Solutions::removeElement(vector<int> &nums, int val) {
    int index = 0; // represent the next index not equal to val
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i]!=val){
            nums[index++] = nums[i]; // replace the value that equal to val
        }
    }
    return index; // return the index
}

int Solutions::removeDuplicates(vector<int> &nums) {
// first element must not be duplicate,so start with index 1
//    j       // j represent the index that next to the not duplicate one
// [1,2,2,3,4]
//    i       // iterate index for the nums
    int j = 1;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i]!=nums[i-1]){ // compare current index and pre index value
            nums[j++] = nums[i]; // replace the duplicate value
        }
    }
    return j;
}

int Solutions::removeDuplicates2(vector<int> &nums) {
    // each unique element appears at most twice.

}

Solutions::



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

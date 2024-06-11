//
// Created by Jacklee on 2024/6/4.
//

#ifndef DSA_SOLUTIONS_H
#define DSA_SOLUTIONS_H


#include <string>
#include <vector>

using namespace std;
class Solutions {
public:
    /**
     * You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.
     * Return the merged string.
     * @param str1
     * @param str2
     */
    string mergeAlternately(string word1,string word2);
    /**
     * For two strings s and t, we say "t divides s" if and only if s = t + t + t + ... + t + t (i.e., t is concatenated with itself one or more times).
     * Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.
     * @param str1
     * @param str2
     * @return
     */
    string gcdOfStrings(string str1, string str2);
    /**
     * There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.
     * Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.
     * Note that multiple kids can have the greatest number of candies.
     * @param candies
     * @param extraCandies
     * @return
     */
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies);

    /**
     * You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.
     * Given an integer array flowerbed containing 0's and 1's,
     * where 0 means empty and 1 means not empty, and an integer n,
     * return true if n new flowers can be planted in the flowerbed
     * without violating the no-adjacent-flowers rule and false otherwise.
     * @param flowerbed
     * @param n
     * @return
     */
    bool canPlaceFlowers(vector<int>& flowerbed, int n);

    /**
     * You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n,
     * representing the number of elements in nums1 and nums2 respectively.
     * @param nums1
     * @param m
     * @param nums2
     * @param n
     */
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n);

    /**
     * Given an integer array nums and an integer val, remove all occurrences of val in nums in-place.
     * The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.
     * @param nums
     * @param val
     * @return
     */
    int removeElement(vector<int>& nums, int val);

    /**
     * Given an integer array nums sorted in non-decreasing order,
     * remove the duplicates in-place such that each unique element appears only once.
     * The relative order of the elements should be kept the same.
     * Then return the number of unique elements in nums.
     * @param nums
     * @return
     */
    int removeDuplicates(vector<int>& nums);

    /**
     * Given an integer array nums sorted in non-decreasing order,
     * remove some duplicates in-place such that each unique element appears at most twice.
     * The relative order of the elements should be kept the same.
     * @param nums
     * @return
     */
    int removeDuplicates2(vector<int>& nums);


};


#endif //DSA_SOLUTIONS_H

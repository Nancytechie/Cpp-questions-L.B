#include<iostream>
using namespace std;

int binarySearch(vector<int> &nums, int target, int s, int e) {
    if (s > e) {
        return -1;
    }

    int mid = s + (e - s)/2;

    if (nums[mid] == target) {
        return mid; 
    } else if (nums[mid] < target) {
        return binarySearch(nums, target, mid + 1, e);
    } else {
        return binarySearch(nums, target, s, mid - 1); 
    }
}

int search(vector<int> &nums, int target) {
    return binarySearch(nums, target, 0, nums.size() - 1);
} 
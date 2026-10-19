#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    // Helper function to merge two sorted sub-arrays into one sorted range.
    // WHY merge? Because combining two already-sorted halves takes linear time O(n)
    // rather than comparing every element with every other element.
    void merge(vector<int>& nums, int left, int mid, int right) {
        vector<int> temp; // Temporary container to store merged results in sorted order
        
        int i = left;     // Pointer for the left sorted sub-array [left ... mid]
        int j = mid + 1;  // Pointer for the right sorted sub-array [mid + 1 ... right]

        // Compare elements from both halves and push the smaller one into temp
        while (i <= mid && j <= right) {
            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            } else {
                temp.push_back(nums[j]);
                j++;
            }
        }

        // If there are leftover elements in the left half, copy them over
        while (i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }

        // If there are leftover elements in the right half, copy them over
        while (j <= right) {
            temp.push_back(nums[j]);
            j++;
        }

        // Transfer the sorted elements from our temporary vector back into the original nums array
        for (int k = 0; k < temp.size(); k++) {
            nums[left + k] = temp[k];
        }
    }

    // Recursive divide-and-conquer function
    void mergeSort(vector<int>& nums, int left, int right) {
        // BASE CASE: If left >= right, the sub-array has 1 or 0 elements, 
        // meaning it is already trivially sorted. Stop recursing!
        if (left >= right) {
            return;
        }

        // Find the middle index safely to prevent integer overflow
        int mid = left + (right - left) / 2;

        // DIVIDE & CONQUER STEP 1: Sort the left half [left ... mid]
        mergeSort(nums, left, mid);

        // DIVIDE & CONQUER STEP 2: Sort the right half [mid + 1 ... right]
        mergeSort(nums, mid + 1, right);

        // COMBINE STEP: Merge the two newly sorted halves together
        merge(nums, left, mid, right);
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        // Initiate the merge sort algorithm across the entire array from index 0 to n-1
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};
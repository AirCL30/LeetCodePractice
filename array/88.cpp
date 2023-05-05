//
// Created by AirCL on 2023/4/26.
//
#include "iostream"
#include "vector"
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        if (m == 0 && n != 0){
            nums1 = nums2;
            return;
        }

        for (int i = 0; i < nums2.size(); ++i) {
            if (nums2[i] >= nums1[m + i - 1]){
                nums1[m + i] = nums2[i];
                continue;
            }
            for (int j = m + i - 1; j >= 0; --j) {
                if (nums1[j] >= nums2[i]){
                    nums1[j + 1] = nums1[j];
                    nums1[j] = nums2[i];
                }
            }
        }

        for (int i = 0; i < nums1.size(); ++i) {
            cout<<nums1[i]<<" ";
        }
    }
};

int main(){

    Solution solution;

    int array1[6] = {1,2,3,0,0,0};
    int array2[3] = {2,5,6};

//    int array1[1] = {1,2,3,0,0,0};
//    int array2[1] = {2,5,6};

    vector<int> nums1(array1, array1+6);
    vector<int> nums2(array2, array2+3);

    solution.merge(nums1, 3, nums2, 3);

    return 0;
}
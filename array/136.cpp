//
// Created by AirCL on 2023/5/5.
//
#include "iostream"
#include "vector"
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        vector<int>::iterator it;

        for(int i = 0;i < nums.size();i++){
            if (nums[i] == 4e4){
                continue;
            }
            it = find(nums.begin() + i + 1, nums.end(), nums[i]);
            if (it == nums.end()){
                return nums[i];
            } else{
                nums[i] = 4e4;
                *it = 4e4;
            }
        }

        return 0;
    }
};

int main(){

    Solution solution;

    vector<int> nums = {4, 1, 2, 1, 4};
//    vector<int> nums = {2, 2, 1};
//    vector<int> nums = {1};

    cout<<solution.singleNumber(nums);

    return 0;
}
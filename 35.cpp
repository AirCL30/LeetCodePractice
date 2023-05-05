#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    	if(nums.size() == 0){
    		return 0;
		}
		
		for(int i = 0;i < nums.size();i++){
			if(nums[i] == target){
				return i;
			}
			if(nums[i] > target){
				return i;
			}
		}
		
		return nums.size();
    }
};

int main(){
	
	Solution solution;
	int array[4] = {1, 3, 5, 6};
	vector<int> nums(array, array+4);
	
	printf("%d", solution.searchInsert(nums, 0));
	printf("%d", solution.searchInsert(nums, 1));
	printf("%d", solution.searchInsert(nums, 2));
	printf("%d", solution.searchInsert(nums, 4));
	printf("%d", solution.searchInsert(nums, 7));
	
	return 0;
}

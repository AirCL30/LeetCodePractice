#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    	if(nums.size() == 0){
    		return 0;
		}
    	
    	for(int i = 0;i < nums.size();){
    		if(nums[i] == val){
    			nums[i] = nums[nums.size() - 1];
    			nums.pop_back();
			}else{
				i++;
			}
		}
    	return nums.size();
    }
};


int main(){
	
	int array[1] = {1};
	vector<int> nums(array, array+1);
	
	Solution solution;
	
	printf("%d", solution.removeElement(nums, 1));
	
	return 0;
}

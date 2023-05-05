#include <iostream>
#include <vector>
using namespace std;

class Solution {
	public:
    int removeDuplicates(vector<int>& nums) {
    	
    	// 当vector没有元素时，返回0 
    	if(nums.size() == 0){
    		return 0;
		}
		
		// 用于记录当前遍历到的元素 
		int current_num = nums[0];
		// 记录当前不重复元素的个数 
		int count = 1;
    	
    	for(int i = 1;i < nums.size();i++){
    		// 当遍历到与当前元素不一样的元素时 
    		if(nums[i] != current_num){
    			// 元素计数 +1 
    			count++;
    			// 记录当前的元素值 
    			current_num = nums[i];
    			// 将当前唯一元素赋值当前边 
    			nums[count - 1] = current_num;
			}
		}
    	
        return count;
    }
};

int main(){
	
	Solution solution;
	
	int array[10] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

	vector<int> nums(array, array + 10);
	
	int k; 
	
	k = solution.removeDuplicates(nums);
	
	printf("%d", k);
	
	return 0; 
}

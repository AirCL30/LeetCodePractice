#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
//    	if(digits.size() == 0){
//    		return NULL;
//		}
		
		int plus_flag = 0;

        digits[digits.size() - 1] += 1;

        if(digits[digits.size() - 1] == 10){
            plus_flag = 1;
            digits[digits.size() - 1] = 0;
        }

		for(int i = digits.size() - 2;i >= 0;i--){
            if (plus_flag){
                digits[i] += 1;
                if (digits[i] == 10){
                    digits[i] = 0;
                    plus_flag = 1;
                } else{
                    plus_flag = 0;
                }
            } else{
                return digits;
            }
		}

        if (plus_flag){
            digits.insert(digits.begin(), 1);
        }
		
		return digits;
    }
};

int main(){
	
	Solution solution;
	int array[4] = {9, 9, 9, 9};
	vector<int> nums(array, array+4);
	
	vector<int> res = solution.plusOne(nums);
	
	for(int i = 0;i < res.size();i++){
		cout<<res[i]<<" "; 
	}
	
	return 0;
}

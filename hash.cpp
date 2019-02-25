#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        
        vector<int> result;
        
        map<int, int> lookup; // key=num val=index of num
        
        for (int i=0; i < nums.size(); i++){
            
            int num = nums[i];
            int compliment = target - num; // derived from target = num + compliment
            
            if ( lookup.find(compliment) != lookup.end() ){ // lookup compliement
				cout << compliment << "van "<< endl;
                result.push_back(i); // index of num
                result.push_back(lookup[compliment]); // index of compliment
                break;
            }
            
            lookup[num] = i; // add num into the hash if corresponding compliment is NOT found
        }
        
        return result;
    }
    
};
int main(){
	static const int arr[] = {2,2,7,13};
	vector<int> numm (arr, arr + sizeof(arr) / sizeof(arr[0]) );
	int target;
	target =9;
	Solution sol;
	cout <<  sol.twoSum(numm, target)[0] << endl;
	cout <<  sol.twoSum(numm, target)[1] << endl;
}

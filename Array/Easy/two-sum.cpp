#include <iostream>
#include<vector>
#include<map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        vector<int> sol;
        for(int i = 0; nums.size(); i++) {
            int diff = target - nums[i];
            if(m.find(diff) == m.end()) {
                m[nums[i]] = i;
            }
            else {
                sol.push_back(m[diff]);
                sol.push_back(i);
                break;
            }
        }
        return sol;
    }

int main() {
    
}
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> result2;
        vector<int> result1;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                result2.push_back(nums[i]);
            }
            else {
                result1.push_back(nums[i]);
            }
        }
        result2.insert(result2.end(), result1.begin(), result1.end());

        return result2;
    }
};
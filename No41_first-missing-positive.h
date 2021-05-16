//
// Created by cam xu on 2021/5/16.
//

#include <vector>

using namespace std;

namespace ns41 {

    class Solution {
    public:
        int firstMissingPositive(vector<int> &nums) {
            for (int i = 0; i < nums.size();) {
                if (nums[i] > 0 && nums[i] <= nums.size()
                    && nums[i] != i + 1 && nums[nums[i] - 1] != nums[i]) {
                    swap(nums[i], nums[nums[i]-1]);
                } else {
                    ++i;
                }
            }

            for (int i = 0; i < nums.size(); ++i) {
                if (nums[i] != i + 1) {
                    return i + 1;
                }
            }

            return nums.size();
        }

    private:
        void swap(int &a,int &b) {
            int c = a;
            a = b;
            b = c;
        }
    };

};
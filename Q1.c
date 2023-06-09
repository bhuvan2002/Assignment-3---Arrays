#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int threeSumClosest(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    int diff = INT_MAX;

    for (int i = 0; i < nums.size(); i++) {
        int j = i + 1;
        int k = nums.size() - 1;

        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];

            if (std::abs(diff) > std::abs(target - sum)) {
                diff = target - sum;
            }

            if (sum < target) {
                j++;
            } else {
                k--;
            }
        }
    }
    return target - diff;
}

int main() {
    std::vector<int> nums = {-1, 2, 1, -4};
    int target = 1;
    std::cout << threeSumClosest(nums, target) << std::endl;
    return 0;
}

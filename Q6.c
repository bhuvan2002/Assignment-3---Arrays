#include <iostream>
#include <vector>
#include <algorithm>

int singleNumber(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());

    for (int i = 0; i <= nums.size() - 1; i += 2) {
        if (nums[i] != nums[i + 1]) {
            return nums[i];
        }
    }

    return nums[nums.size() - 1];
}

int main() {
    std::vector<int> nums = { 3, 2, 0, 1 };
    int result = singleNumber(nums);
    std::cout << result << std::endl;
    return 0;
}

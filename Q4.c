#include <iostream>
#include <vector>
#include <algorithm>

int searchInsert(std::vector<int>& nums, int target) {
    nums.push_back(target);
    std::sort(nums.begin(), nums.end());
    auto it = std::lower_bound(nums.begin(), nums.end(), target);
    return std::distance(nums.begin(), it);
}

int main() {
    std::vector<int> nums = { 1, 3, 5, 6 };
    int target = 5;
    std::cout << searchInsert(nums, target) << std::endl;
    return 0;
}

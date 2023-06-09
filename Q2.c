#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target) {
    std::vector<std::vector<int>> result;
    std::sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            int k = j + 1;
            int l = nums.size() - 1;

            while (k < l) {
                int sum = nums[i] + nums[j] + nums[k] + nums[l];

                if (sum == target) {
                    result.push_back({ nums[i], nums[j], nums[k], nums[l] });

                    while (k < l && nums[k] == nums[k + 1]) k++;
                    while (k < l && nums[l] == nums[l - 1]) l--;

                    k++;
                    l--;
                } else if (sum > target) {
                    l--;
                } else if (sum < target) {
                    k++;
                }
            }

            while (j < nums.size() - 1 && nums[j] == nums[j + 1]) j++;
        }

        while (i < nums.size() - 1 && nums[i] == nums[i + 1]) i++;
    }

    return result;
}

void printResult(const std::vector<std::vector<int>>& result) {
    for (const auto& quad : result) {
        for (int i = 0; i < quad.size(); i++) {
            std::cout << quad[i];
            if (i != quad.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<int> nums = { 1, 0, -1, 0, -2, 2 };
    int target = 0;
    std::vector<std::vector<int>> result = fourSum(nums, target);
    printResult(result);
    return 0;
}

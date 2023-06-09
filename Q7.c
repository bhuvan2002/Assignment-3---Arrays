#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> summaryRanges(std::vector<int>& nums) {
    std::vector<std::string> result;

    for (int i = 0; i < nums.size(); i++) {
        int start = nums[i];
        while (i < nums.size() - 1 && nums[i + 1] - nums[i] == 1) {
            i++;
        }
        if (start != nums[i]) {
            result.push_back(std::to_string(start) + "->" + std::to_string(nums[i]));
        } else {
            result.push_back(std::to_string(start));
        }
    }

    return result;
}

void printResult(const std::vector<std::string>& result) {
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i];
        if (i != result.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> nums = { 0, 1, 3, 50, 75 };
    std::vector<std::string> result = summaryRanges(nums);
    printResult(result);
    return 0;
}

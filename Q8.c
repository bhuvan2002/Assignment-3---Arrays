#include <iostream>
#include <vector>
#include <algorithm>

struct Meeting {
    int index;
    int startTime;
    int endTime;
};

std::vector<int> maxMeetings(std::vector<int>& s, std::vector<int>& f, int n) {
    // Create a vector of Meeting objects
    std::vector<Meeting> meetings;
    for (int i = 0; i < n; i++) {
        Meeting meeting;
        meeting.index = i + 1;
        meeting.startTime = s[i];
        meeting.endTime = f[i];
        meetings.push_back(meeting);
    }

    // Sort the meetings based on end time
    std::sort(meetings.begin(), meetings.end(), [](const Meeting& a, const Meeting& b) {
        return a.endTime < b.endTime;
    });

    int endTime = meetings[0].endTime;
    std::vector<int> result;
    result.push_back(meetings[0].index);

    for (int k = 1; k < n; k++) {
        int startTime = meetings[k].startTime;
        if (startTime > endTime) {
            result.push_back(meetings[k].index);
            endTime = meetings[k].endTime;
        }
    }

    return result;
}

void printResult(const std::vector<int>& result) {
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i];
        if (i != result.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> s = { 1, 3, 0, 5, 8, 5 };
    std::vector<int> f = { 2, 4, 6, 7, 9, 9 };
    int n = s.size();

    std::vector<int> result = maxMeetings(s, f, n);
    printResult(result);

    return 0;
}

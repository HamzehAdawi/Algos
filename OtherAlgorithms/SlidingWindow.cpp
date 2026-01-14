#include <iostream>
using namespace std;

class SlidingWindow {
public:
    void slide(int arr[], int n, int targetSum) {
        int left = 0;
        int currSum = 0;

        for (int right = 0; right < n; right++) {
            currSum += arr[right];

            while (currSum > targetSum) {
                currSum -= arr[left];
                left++;
            }

            if (currSum == targetSum) {
                cout << "Indexes from " << left
                     << " to " << right
                     << " total " << targetSum << endl;
            }
        }
    }
};

int main() {
    int arr[] = {2, 32, 2, 51, 3, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    SlidingWindow sw;
    sw.slide(arr, n, target);

    return 0;
}

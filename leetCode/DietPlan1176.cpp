class Solution {
public:
    int dietPlanPerformance(vector<int>& calories, int k, int lower, int upper) {
        int currTotal = 0;
        int points = 0;

        for (int i = 0; i < calories.size(); i++) {
            currTotal += calories[i]; // add current element

            if (i >= k) {
                currTotal -= calories[i - k]; // remove element leaving window
            }

            if (i >= k - 1) { // window size is k
                if (currTotal < lower) {
                    points--;
                } else if (currTotal > upper) {
                    points++;
                }
            }
        }

        return points;
    }
};

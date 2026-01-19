class Solution {
public:
    vector<int> findSubarray(vector<int>& arr) {
        long long currSum = 0, maxSum = -1;
        int start = 0;
        int bestL = -1, bestR = -1;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] >= 0) {
                currSum += arr[i];

                if (currSum > maxSum ||
                   (currSum == maxSum && start == bestL && i > bestR)) {
                    maxSum = currSum;
                    bestL = start;
                    bestR = i;
                }
            } else {
                currSum = 0;
                start = i + 1;
            }
        }

        if (maxSum == -1) return {-1};

        return vector<int>(arr.begin() + bestL, arr.begin() + bestR + 1);
    }
};

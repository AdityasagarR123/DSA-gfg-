class Solution {
public:
    int stockBuySell(vector<int>& arr) {
        int profit = 0;
        for (int i = 1; i < arr.size(); i++)
            if (arr[i] > arr[i - 1])
                profit += arr[i] - arr[i - 1];
        return profit;
    }

    int stockBuySell(int n, vector<int>& arr) {
        int profit = 0;
        for (int i = 1; i < n; i++)
            if (arr[i] > arr[i - 1])
                profit += arr[i] - arr[i - 1];
        return profit;
    }
};

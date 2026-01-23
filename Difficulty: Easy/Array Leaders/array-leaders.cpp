class Solution {
public:
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        vector<int> res;
        int mx = arr[n - 1];
        res.push_back(mx);
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= mx) {
                mx = arr[i];
                res.push_back(mx);
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

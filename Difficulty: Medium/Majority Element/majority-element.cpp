class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int cnt = 0, el = 0;
        for (int x : arr) {
            if (cnt == 0) {
                el = x;
                cnt = 1;
            } else if (x == el) cnt++;
            else cnt--;
        }
        cnt = 0;
        for (int x : arr) if (x == el) cnt++;
        return cnt > arr.size() / 2 ? el : -1;
    }
};

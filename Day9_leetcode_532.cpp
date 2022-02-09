if (k < 0) return 0;
    unordered_map<int, int> m;
    for (int n : nums) m[n]++;
    int cnt = 0;
    for (auto p : m) {
      if ((!k && p.second > 1)
        || (k && m.count(p.first + k))) ++cnt;
    }
    return cnt;
    
    
    
    //another
    class Solution {
public:
    int findPairs(vector<int>& A, int k) {
        unordered_map<int, int> m;
        for (int n : A) m[n]++;
        int ans = 0;
        for (auto &[n, cnt] : m) {
            ans += k ? m.count(n - k) : cnt > 1;
        }
        return ans;
    }
};

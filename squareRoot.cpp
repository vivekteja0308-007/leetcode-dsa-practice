class Solution {
public:
    int mySqrt(int x) {
        int l = 0, h = x, ans = -1;
        while (l<= h){
            long long mid = (l+h) / 2;
            long long midsq = mid*mid;
            if(midsq == x) return mid;
            else if (midsq > x) h = mid-1;
            else {
                ans = mid;
                l = mid + 1;
            }
        }
        return ans;
    }
};
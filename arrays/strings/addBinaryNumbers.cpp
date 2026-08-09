class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int car = 0;

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        for (int i = 0; i < max(a.length(), b.length()); i++) {
            int digA = i < a.length() ? a[i] - '0' : 0;
            int digB = i < b.length() ? b[i] - '0' : 0;

            int t = digA + digB + car;
            char c = (t % 2) + '0';
            res += c;
            car= t / 2;
        }

        if (car) {
            res += '1';
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
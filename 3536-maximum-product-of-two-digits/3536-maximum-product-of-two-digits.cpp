class Solution {
public:
    int maxProduct(int n) {
        string num = to_string(n);
        vector<char> arr;

        for (char c : num) {
            arr.push_back(c);
        }

        sort(arr.begin(), arr.end());

        int sz = arr.size();
        int a = arr[sz - 1] - '0';
        int b = arr[sz - 2] - '0';

        return a * b;
    }
};
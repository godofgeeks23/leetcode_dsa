class Solution {
public:
    bool isPalindrome(int x) {
        string s1 = to_string(x);
        reverse(s1.begin(), s1.end());
        string s2 = to_string(x);
        if(s1==s2)
            return true;
        return false;
    }
};
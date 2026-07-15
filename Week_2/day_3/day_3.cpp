class Solution {
public:
    bool isSubsequence(string s, string t) {

        int i = 0; // s small 
        int j = 0; // t bade string 

        while (j < t.size()) {

            if ( s[i] == t[j]) {
                i++; 
            }
            j++;
        }
        return i == s.size();
    }
};
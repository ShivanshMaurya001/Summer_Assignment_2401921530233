class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (string& word : strs) {
            string key = word;
            sort(key.begin(), key.end());
            mp[key].push_back(word);
        }

        vector<vector<string>> result;
        for (auto it = mp.begin(); it != mp.end(); it++) { // iterator ha ble dlr nahi kar sakte map me ok
            result.push_back(it->second);
        }

        return result;
    }
};




class Solution {
public:

    int expandFromCenter(string s, int left, int right) {
        int n = s.size();

        while (left >= 0 && right < n && s[left] == s[right]) {
            left--;   
            right++;  
        }


        return right - left - 1;
    }

    string longestPalindrome(string s) {

        int n = s.size();
        if (n == 0) return "";

        int start = 0;
        int maxLen = 1;

        for (int i = 0; i < n; i++) {

            int len1 = expandFromCenter(s, i, i);

            int len2 = expandFromCenter(s, i, i + 1);

            int currLen = (len1 > len2) ? len1 : len2;

            if (currLen > maxLen) {
                maxLen = currLen;
                start = i - (currLen - 1) / 2;
            }
        }

        return s.substr(start, maxLen);
    }
};
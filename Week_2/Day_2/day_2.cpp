class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(256, -1);
        int left = 0;
        int maxLen = 0;

        for (int i = 0; i < s.size(); i++) {
            if (last[s[i]] >= left) {
                left = last[s[i]] + 1;
            }
            last[s[i]] = i;
            maxLen = max(maxLen, i - left + 1);
        }

        return maxLen;
    }
};


class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        
        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);
        
        for(int i = 0; i < s1.size(); i++){
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }
        
        if(freq1 == freq2) return true;
        
        for(int i = s1.size(); i < s2.size(); i++){
            freq2[s2[i] - 'a']++;
            freq2[s2[i - s1.size()] - 'a']--;
            
            if(freq1 == freq2) return true;
        }
        
        return false;
    }
};



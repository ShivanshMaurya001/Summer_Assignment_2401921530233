class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq1[26] = {0};
        int freq2[26] = {0};

        for (int i = 0; i < ransomNote.size(); i++) {
            int id = ransomNote[i] - 'a';
            freq1[id] = freq1[id] + 1;
        }
        for (int i = 0; i < magazine.size(); i++) {
            int id = magazine[i] - 'a';
            freq2[id] = freq2[id] + 1;
        }
        for (int i = 0; i < 26; i++) {
            if (freq2[i] < freq1[i]) 
                return false;
        }
        return true;
    }
};



class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {0};
        for(int i = 0; i < s.size(); i++){

            int index = s[i] - 'a';
            freq[index]++;
        }
        for(int i = 0; i < s.size(); i++){
            int index = s[i] - 'a';

            if(freq[index] == 1){
                return i;
            }
        }
        return -1;
    }
};



class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size())
            return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != t[i]) {
                return false;
            }
        }
        return true;
    }
};
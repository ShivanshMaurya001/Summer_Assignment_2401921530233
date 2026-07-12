class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() -1;
        char ans;

        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        
        
    }
};





class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {


        if (strs.size() == 0)
            return "";


        string prefix = strs[0];

    
        for (int i = 1; i < strs.size(); i++) {

            int j = 0; // pointer for character comparison

            while (j < prefix.size() && j < strs[i].size() &&
                   prefix[j] == strs[i][j]) {
                j++;
            }

            prefix = prefix.substr(0, j);

            if (prefix == "")
                return "";
        }

        return prefix;
    }
};
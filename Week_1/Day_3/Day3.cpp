class Solution {
public:
    int maxArea(vector<int>& height) {
    int maxWater = 0;
    int left = 0;
    int right = height.size() - 1;
    
    while (left < right) {
        int w = right - left;
        int ht = min(height[left], height[right]);
        int currWater = w * ht;
        maxWater = max(maxWater, currWater);
        
        height[left] < height[right] ? left++ : right--;
    }
    
    return maxWater;
}
};




class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans;

        for (int i = 0; i < n; i++) {
            int ring = nums[i] * nums[i];
            ans.push_back(ring);

        }
        sort(ans.begin(), ans.end());
        return ans;
    };
};




class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
          // yaha next non-zero aayega aur esko age badhate raho

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
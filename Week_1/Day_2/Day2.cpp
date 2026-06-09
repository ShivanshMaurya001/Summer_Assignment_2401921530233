class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int currSum = 0;
        int maxSum = nums[0];   // because array negative bhi ho sakta hai

        for(int i = 0; i < nums.size(); i++){
            currSum = currSum + nums[i];

            if(currSum > maxSum){
                maxSum = currSum;
            }

            if(currSum < 0){
                currSum = 0;
            }
        }

        return maxSum;
    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());

        for(int i=1;i<n;i++)
        { 
        if(nums[i]==nums[i-1]) 
        // i -1  see 0 index vala bhi solve ho jayegaaa
        {
            return true;
        }
        }
        return false;
        
    }
};

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int n = nums.size();

        long long sum = 0;

        for(int i = 0; i < k; i++) {
            sum = sum + nums[i];
        }

        long long maxi = sum;

        for(int i = k; i < n; i++) {

            sum = sum + nums[i];
            sum = sum - nums[i - k];

            if(sum > maxi) {
                maxi = sum;
            }
        }

        return (double)maxi / k;
    }
};
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int max_index = 0;
        int min_index = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] > nums[max_index])
                max_index = i;

            if(nums[i] < nums[min_index])
                min_index = i;
        }

        int left = min(max_index, min_index);
        int right = max(max_index, min_index);

        // Both from front
        int ans1 = right + 1;

        // Both from back
        int ans2 = n - left;

        // One from front, one from back
        int ans3 = left + 1 + n - right;

        return min(ans1, min(ans2, ans3));
    }
};
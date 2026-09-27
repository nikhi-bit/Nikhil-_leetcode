class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int n = cardPoints.size();

        int sum = 0;

        // Take first k cards from left
        for(int i = 0; i < k; i++) {
            sum += cardPoints[i];
        }

        int ans = sum;

        // Now replace left cards with right cards
        int right = n - 1;

        for(int i = k - 1; i >= 0; i--) {

            sum -= cardPoints[i];

            sum += cardPoints[right];

            right--;

            ans = max(ans, sum);
        }

        return ans;
    }
};
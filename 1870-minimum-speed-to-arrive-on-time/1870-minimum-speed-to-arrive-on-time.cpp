class Solution {
private:
    bool ispossible(vector<int>& dist, int mid, double hour) {
        double time = 0;

        for (int i = 0; i < dist.size() - 1; i++) {
            time += ceil((double)dist[i] / mid);
        }

        time += (double)dist[dist.size() - 1] / mid;

        return time <= hour;
    }

public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int s = 1;
        int e = 10000000;
        int ans = -1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (ispossible(dist, mid, hour)) {
                ans = mid;
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }

        return ans;
    }
};
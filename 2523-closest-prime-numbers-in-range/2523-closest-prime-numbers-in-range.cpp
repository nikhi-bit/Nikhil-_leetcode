class Solution {
private:
    bool isprime(int n) {
        if (n < 2)
            return false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }

        return true;
    }

public:
    vector<int> closestPrimes(int left, int right) {

        int prev = -1;
        int a = -1, b = -1;
        int diff = INT_MAX;

        for (int i = left; i <= right; i++) {

            if (isprime(i)) {

                if (prev != -1 && i - prev < diff) {
                    diff = i - prev;
                    a = prev;
                    b = i;
                }

                prev = i;
            }
        }

        return {a, b};
    }
};
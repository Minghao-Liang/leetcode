class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, pro = 1;
        int m;
        do {
            m = n % 10;
            sum += m;
            pro *= m;
            n /= 10;
        } while(n > 0);
        return pro - sum;
    }
};
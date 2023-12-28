class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        int sum = 0;
        int min = salary[0], max = salary[0];
        for(int i = 0; i < n; i++) {
            sum += salary[i];
            if(salary[i] < min) min = salary[i];
            if(salary[i] > max) max = salary[i];
        }
        double ave = (double)(sum - max - min) / (n - 2);
        return ave;
    }
};
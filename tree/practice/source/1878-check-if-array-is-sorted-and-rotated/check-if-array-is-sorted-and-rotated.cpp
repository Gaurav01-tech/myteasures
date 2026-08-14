class Solution {
public:
    bool check(vector<int>& nums) {

        int n = nums.size();
        int max = INT_MAX;

        // Find minimum
        for(int i = 0; i < n; i++) {
            if(nums[i] < max) {
                max = nums[i];
            }
        }

        // Try every occurrence of minimum
        for(int pos = 0; pos < n; pos++) {

            if(nums[pos] != max)
                continue;

            vector<int> temp = nums;

            // Rotate left pos times
            for(int i = 0; i < pos; i++) {
                int x = temp[0];

                for(int j = 0; j < n - 1; j++) {
                    temp[j] = temp[j + 1];
                }

                temp[n - 1] = x;
            }

            // Check if sorted
            int flag = 1;

            for(int i = 0; i < n - 1; i++) {
                if(temp[i + 1] < temp[i]) {
                    flag = 0;
                    break;
                }
            }

            if(flag == 1)
                return true;
        }

        return false;
    }
};
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        int low = 0;
        int high = nums.size() - 1;
        if (nums.empty()) {
            return ans;
        }
        while (low < high) {
            int mid = (low + high) / 2;
            if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        if (nums[low] != target) {
            return ans;
        }
        ans[0] = low;
        high = nums.size() - 1;
        while (low < high) {
            int mid = (low + high + 1) / 2;
            if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid;
            }
        }
        ans[1] = low;
        return ans;
    }
};
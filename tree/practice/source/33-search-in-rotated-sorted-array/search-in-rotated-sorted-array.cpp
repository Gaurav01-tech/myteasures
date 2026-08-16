class Solution {
public:
    int search(vector<int>& nums, int target) {
         int k = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1]) {
                k = i;
                break;
            }
        }

        if (target >= nums[0]) {
            int left = 0;
           int right;
if (k == 0) {
    right = nums.size() - 1;
} else {
    right = k - 1;
}

            while (left <= right) {
                int mid = left + (right - left) / 2;

                if (nums[mid] == target) {
                    return mid;
                } else if (nums[mid] < target) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }
  
        else {
            int left = k;
            int right = nums.size() - 1;

            while (left <= right) {
                int mid = left + (right - left) / 2;

                if (nums[mid] == target) {
                    return mid;
                } else if (nums[mid] < target) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }

        return -1;
    }
};
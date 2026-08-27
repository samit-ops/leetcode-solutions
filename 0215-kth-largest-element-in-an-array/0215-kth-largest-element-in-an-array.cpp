class Solution {
public:
    void heapifyDown(vector<int>& nums, int n, int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if(left < n && nums[left] > nums[largest]) {
            largest = left;
        }

        if(right < n && nums[right] > nums[largest]) {
            largest = right;
        }

        if(largest != i) {
            swap(nums[i], nums[largest]);
            heapifyDown(nums, n, largest);
        }
    }

    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();

        for(int i = n / 2 - 1; i >= 0; i--) {
            heapifyDown(nums, n, i);
        }

        for(int i = 0; i < k - 1; i++) {
            int heapSize = n - i - 1;

            swap(nums[0], nums[heapSize]);

            heapifyDown(nums, heapSize, 0);
        }

        return nums[0];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
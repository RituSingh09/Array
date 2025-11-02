vector<int> runningSum(vector<int>& nums) {
        // new vector to store the running sum result
        vector<int> result(nums.size()); 
        result[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            // running sum at position i = current number + running sum before it
            result[i] = result[i - 1] + nums[i];
        }
        return result;
    }

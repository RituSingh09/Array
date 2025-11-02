int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        
        //Finding min and max indices
        int minIdx = 0, maxIdx = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[minIdx]) minIdx = i;
            if (nums[i] > nums[maxIdx]) maxIdx = i;
        }
        
        int left = min(minIdx, maxIdx);
        int right = max(minIdx, maxIdx);
        
        // option 1 is to Remove both from front
        int op1 = right + 1;
        // option 2 is to Remove both from back
        int op2 = n - left;
        // Soption 3 is to remove One from front, one from back
        int op3 = left + 1 + (n - right);
        
        return min({op1, op2, op3});
}

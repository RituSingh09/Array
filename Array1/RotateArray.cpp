void rotate(vector<int>& nums, int k) {
        int n=nums.size();
    // If k is larger than n, rotating by k is same as rotating by k % n.
    // This also handles the case k == 0 or k is multiple of n.
        k=k%n;
        vector<int> rotated(n);
        for(int i=0;i<n;i++){
          // (i + k) moves the element k positions to the right.
            rotated[(i+k)%n]=nums[i];
        }
        for(int i=0;i<n;i++){
            nums[i]=rotated[i];
}

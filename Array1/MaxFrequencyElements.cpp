int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++; // increase the count for this number
        }
        // Finding the maximum frequency among all elements
        int maxFreq = 0;
        for (auto it : freq) {
            if (it.second > maxFreq)
                maxFreq = it.second; // storing the highest frequency found
        }
        //Counting the total number of elements that have this maximum frequency
        int totalCount = 0;
        for (auto it : freq) {
            if (it.second == maxFreq)
                totalCount += it.second; 
        }
        return totalCount;
}

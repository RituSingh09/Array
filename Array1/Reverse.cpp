void reverseArray(vector<int> &arr , int m) {
    int left = m + 1, right = arr.size() - 1;
    while(left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }	
}
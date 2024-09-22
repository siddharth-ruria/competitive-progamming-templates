int binarySearch(vector<int>& arr, int target) {
    int low = 0, high = arr.size();
    while (low < high) {
        int mid = low + (high - low) / 2;        
        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    if (low < arr.size() && arr[low] == target) {
        return low;
    }
    return -1;
}

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr, arr+n);
        int ans = arr[n-1] - arr[0];
        int tempmin = arr[0] + k;
        int tempmax = arr[n-1] - k;
        for(int i = 1; i < n; i++){
            if(arr[i]-k < 0) continue;
            tempmin = min(tempmin, arr[i]-k);
            tempmax = max(arr[i-1]+k, tempmax);
            ans = min(ans, tempmax-tempmin);
        }
        return ans;
    }
};

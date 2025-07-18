
bool isPossible(vector<int> &arr, int n, int m, int mid) {
    int student = 1;
    int pagesSum = 0;
    for (int i = 0; i < n; i++) {
      if (pagesSum + arr[i] <= mid) {
        pagesSum += arr[i];
      } else {
        student++;
        if (student > m || arr[i] > mid) {
          return false;
        }
        pagesSum = arr[i];
      }
    }
  
    return true;
  }
  int findPages(vector<int> &arr, int n, int m) {
    // Write your code here.
    if (m > n) {
      return -1;
    }
    int ans = -1;
    int sum = 0;
    for (int i = 0; i < n; i++) {
      sum += arr[i];
    }
  
    int s = 0, e = sum;
    int mid = s + (e - s) / 2;
    while (s <= e) {
  
      if (isPossible(arr, n, m, mid)) {
  
        ans = mid;
        e = mid - 1;
      } else {
  
        s = mid + 1;
      }
      mid = s + (e - s) / 2;
    }
    return ans;
  }
  
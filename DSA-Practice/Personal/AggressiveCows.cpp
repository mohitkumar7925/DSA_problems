bool isPossible(vector<int> &stalls, int k , int mid){

    int cowCount = 1;
    int lastPosition = 0;

    for(int i = 0 ; i < stalls.size() ; i++){
        if(stalls[i] - stalls[lastPosition] >= mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            lastPosition = i;
        }
    }
    return false;

}


int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin() , stalls.end());

    int s = 0;
    int maxi = -1;
    for(int i = 0 ; i < stalls.size() ; i++){
        maxi = max(maxi , stalls[i]);
    }

    int e = maxi;
    int mid = s + (e - s)/2;
    int ans = -1;

    while(s<=e){

        if(isPossible(stalls,  k , mid)){
            s = mid + 1;
            ans = mid;
        }else{

            e = mid - 1;
        }
        mid = s + ( e - s )/2;
    }
    return ans;
    


}
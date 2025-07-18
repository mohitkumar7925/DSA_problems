import java.util.Arrays;


public class Solution {
    public static int aggressiveCows(int []stalls, int k) {
        //    Write your code here.
       Arrays.sort(stalls);
        int max = stalls[stalls.length - 1] - stalls[0];
        // for(int i = 0 ; i < stalls.length ; i++){
        //     if(stalls[i] > max){
        //         max = stalls[i];
        //     }
        // }
        int lo = 0;
        int hi = max;
        int mid;
        int ans = -1;

        while(lo <= hi){
            mid = lo + ( hi - lo)/2;
            if(isPossible(stalls,k,mid)){
                ans = mid;
                lo = mid + 1;
            }
            else{
                hi = mid - 1;
            }

        }
        
        return ans;
        
        
    }
    public static boolean isPossible(int[] stalls, int k, int mid){
               
        int cows = 1;
        int last = 0;
                
        for(int i = 0 ; i<stalls.length ; i++){
            if(stalls[i] - stalls[last]  >= mid){
                cows++;
                if(cows == k){
                    return true;
                }
                last = i;
            }
            
        }
        
        return false;
        
        
    }
}




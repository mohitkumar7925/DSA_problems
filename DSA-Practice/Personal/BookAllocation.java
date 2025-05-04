import java.util.ArrayList;
public class Solution {

    static boolean check(ArrayList<Integer> arr, int n, int m, int mid){


        int count = 0;
        int student = 1;

        for(int i = 0; i < n; i++){
            if(count + arr.get(i) <= mid){
                count +=  arr.get(i);
            }
            else {
                student++;
                if(student > m ||  arr.get(i) > mid ){
                    return false;
                }
                count =  arr.get(i);
            }
        }

        return true;

    }

    public static int findPages(ArrayList<Integer> arr, int n, int m) {
        // Write your code here.
        if(m > n){
            return -1;
        }

        int sum= 0;
        int ans = -1;
        int low =  arr.get(0);
        for(int i = 0 ; i < n ; i++){
            sum +=  arr.get(i);
        }
        int high = sum;
        int mid ;
        while(low <= high){
            mid = low + (high - low)/2;

            if(check(arr,n,m,mid)){
                ans = mid;
                high = mid -1;
            }
            else{
                low = mid + 1;
            }

        }

        return ans;



    }
}
import java.util.* ;
import java.io.*; 

public class Solution {
    
    public static void bubbleSort(int[] arr, int n) {   
        // Write your code here.

        for(int i = 0 ; i < n; i++){
            for(int j = 0 ; j < n - i - 1 ; j++){
                if(arr[j] > arr[j + 1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }

    }

}
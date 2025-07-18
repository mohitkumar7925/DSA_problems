import java.util.* ;
import java.io.*; 

public class Solution {

	public static void insertionSort(int n , int[] arr) {
		// Write your code here.
		int temp;
		for(int i = 1, j ; i<n; i++){
			temp = arr[i];
			j = i - 1;
			while( j >= 0){
				if(arr[j] > temp){
					arr[j+1]= arr[j];
				}
				else{
					break;
				}
				 j--;

			}
			arr[j+1] = temp;
		}

	}
}

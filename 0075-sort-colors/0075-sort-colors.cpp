class Solution {
public:
    void sortColors(vector<int>& nums) {
// condition of dutch national flag algorithm
/* 
  0s -> 0 to low-1
  1s - > low to mid-1
      |
  unsorted array -> mid to high  
      |
  2s -> high+1 to n-1
*/

        int n = nums.size();
        int mid = 0, high = n-1, low = 0;

        while(mid <= high) {
      if(nums[mid] == 0) {
  swap(nums[mid],nums[low]);
        mid++;
        low++;
      } else if(nums[mid] == 1) {
          mid++;
      } else {
         swap(nums[mid],nums[high]); 
          high--;
      }
        }
        
    }
};
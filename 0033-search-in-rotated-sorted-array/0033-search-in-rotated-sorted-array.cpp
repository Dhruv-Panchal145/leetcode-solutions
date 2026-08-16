class Solution {
public:
    int search(vector<int>& A, int tar) {
        int st = 0, ed = A.size() - 1;
        while(st <= ed){
            int mid = st + (ed-st)/2;
            if(A[mid] == tar){
                return mid;
            }

          if(A[st] <= A[mid]){ // left half sorted
            if(A[st] <= tar && tar <= A[mid]){
               ed = mid - 1;
            }else {
                st = mid + 1;
            }
          }else{ // right half sorted
            if(A[mid] <= tar && tar <= A[ed]){
                st = mid + 1;
            }else {
                ed = mid - 1;
            }
          }
        }
        return -1;
    }
};
class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int n = A.size();
        int st=0,ed=n-1;
       
         if(n == 1) return A[0];
          
        while(st <= ed){
  int mid = st + (ed-st)/2;
      if(mid == 0 && A[0] != A[1]) return A[mid];
      if(mid == n-1 && A[n-1] != A[n-2]) return A[mid];
 
            if(A[mid-1]!= A[mid] && A[mid] != A[mid+1]){
                return A[mid];
            }
            if(mid %2 == 0){//even size array
               if(A[mid-1] == A[mid]){//left
                ed = mid-1;
               }else {//right
                st = mid + 1;
               }
            }else {// odd size array
            if(A[mid-1] == A[mid]){ // right
                 st = mid + 1;
            }else { // left 
              ed = mid - 1;
            }
            }
        }
        return -1;
    }
};
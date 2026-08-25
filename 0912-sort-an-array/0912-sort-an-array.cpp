class Solution {
public:
 
 void merge(vector<int> &arr,int st,int mid, int ed){
    vector<int> temp;
    int i=st,j=mid+1;
        while(i <= mid && j <= ed){
          if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
              i++;
          }else {
         temp.push_back(arr[j]);
           j++;
          }
        }
        while(i <= mid){
 temp.push_back(arr[i]);
              i++;
        }
        while(j <= ed){
temp.push_back(arr[j]);
          j++;
        }
    
    for(int idx = 0; idx < temp.size(); idx++){
            arr[st+idx]=temp[idx];
    }
 } 

 void mergeSort(vector<int>& arr, int st, int ed){
         if(st < ed){
         int mid = st + (ed-st)/2;
          mergeSort(arr,st,mid); // left half
          mergeSort(arr,mid+1,ed); // right half
          merge(arr,st,mid,ed);
         } 
 }
 
    vector<int> sortArray(vector<int>& arr) {
         mergeSort(arr,0,arr.size() - 1);
        return arr; 
    }
};
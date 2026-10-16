class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int low=0;
      int rows=matrix.size();
      int cols=matrix[0].size();
      int high=rows*cols-1;
      while(low<=high){
        int mid=(high+low)/2;
        int c=mid%cols;
        int r=mid/cols;
        if(matrix[r][c]==target){
            return true;
        }
        if(matrix[r][c]<target){
           low=mid+1;
        }
        if(matrix[r][c]>target){
           high=mid-1;
        }
      }
      return false;
    }
};
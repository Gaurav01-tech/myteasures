class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int top=0;
        int bottom=matrix.size()-1;
        while(top<bottom){
            for(int col=0;col<matrix.size();col++){
                int temp=matrix[top][col];
                matrix[top][col]=matrix[bottom][col];
                matrix[bottom][col]=temp;
            }
            top++;
            bottom--;
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=i+1;j<matrix.size();j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
    }
};
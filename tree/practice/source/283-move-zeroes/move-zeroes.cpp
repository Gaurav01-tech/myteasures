class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     
        int l=0,r=nums.size()-1;
        while(l<r){
              if(nums[r]==0){
                r--;    
                continue;        
                }
                if(nums[l]!=0){
                l++;
                continue;
                }
            if(nums[l]==0 && nums[r]!=0){
               int j=l;
                while(j!=r){
                    nums[j]=nums[j+1];
                    j++;    
                }
                nums[j]=0; 
                if(nums[l]!=0){
                l++;
                r--;           
                }
                else{
                    int k=l;
                    while(k!=r){
                        nums[k]=nums[k+1];
                    k++; 
                    }
                }
                }
               
        }
    
    }
};
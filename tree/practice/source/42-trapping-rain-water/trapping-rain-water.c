int trap(int* height, int heightSize) {
    int water=0;
    int i=0;
    int j=heightSize-1;
    int h_left=height[0];
    int h_right=height[j];
    while(i<j){
        if(h_left<=h_right){
            water+=(h_left-height[i]);
            i++;
            if(h_left<height[i]){
            h_left=height[i];
            }
        }
        else{
            water+=(h_right-height[j]);
            j--;
            if(h_right<height[j]){
                h_right=height[j];
            }
        }

    }
    return water;
}
class Solution {
public:
    int maxArea(vector<int>& height) {
        int first=0;
        int last=height.size()-1;
        int maxarea=0;
        while(first<last){
            int width=last-first;
            int length=min(height[first],height[last]);
            int area=width*length;
            maxarea=max(maxarea,area);
            if(height[first]<height[last]){
                first++;
            }else{
                last--;
            }
        }
        return maxarea;
    }
};
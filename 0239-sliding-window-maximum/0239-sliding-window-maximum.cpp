class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i=0;
        int j=k-1;
        vector<int> ans;
        multiset<int> temp;
        for(int s=i;s<=j;s++){
            temp.insert(nums[s]);
        }
        ans.push_back(*temp.rbegin());
        j++;
        while(j<nums.size()){
            temp.erase(temp.find(nums[i]));
            temp.insert(nums[j]);
            ans.push_back(*temp.rbegin());
            i++;
            j++;
        }
        return ans;
    }
};
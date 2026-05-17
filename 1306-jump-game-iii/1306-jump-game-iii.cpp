class Solution {
public:
    bool find(vector<int>& arr,vector<int>& vis,int i){
        if(i<0 || i>=arr.size() || vis[i]){
            return false;
        }
        if(arr[i]==0){
            vis[i]==1;
            return true;
        }
        vis[i]=1;
        return find(arr,vis,i+arr[i]) || find(arr,vis,i-arr[i]);
    }
    bool canReach(vector<int>& arr, int start) {
        vector<int> vis(arr.size(),0);
        return find(arr,vis,start);
    }
};
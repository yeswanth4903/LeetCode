class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> pre;
        int lp=0;
        for(int i:arr1){
            while(i>0){
                pre.insert(i);
                // int si=to_string(i).size();
                // lp=max(lp,si);
                i=i/10;
            }
        }
        int len=0;
        for(int i:arr2){
            int si=to_string(i).size();
            while(i>0 && si>len){
                if(pre.find(i)!=pre.end()){
                    int si=to_string(i).size();
                    len=max(len,si);
                    break;
                }
                i=i/10;
            }
        }
        return len;
    }
};
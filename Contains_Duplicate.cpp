class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        int match=0;
        for(int i=0;i<nums.size();i++){
            if(s.find(s[i])!=s.end()){
                match=match+1;
            }
        }
              s.insert(nums[i]);
    if(match>0){
        return true;
    }
    else{
        return false;
    }
}
};
             
               

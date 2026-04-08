class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>mymap;
        for(const auto &vit : nums)
        {
             auto usit = mymap.insert(vit);
             if(!usit.second)
             {
                return true;
             }
        }
        mymap.clear();
        return false;
        
    }
};
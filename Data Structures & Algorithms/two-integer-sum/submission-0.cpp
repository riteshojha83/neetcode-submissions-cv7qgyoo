class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mymap;
        int index=0;
        vector<int>result;
        for(auto &it : nums)
        {
            auto checkit = mymap.find(target - it);
            if(checkit != mymap.end())
            {
                result.push_back(checkit->second);
                result.push_back(index);
                return result;
            }
            mymap.emplace(it, index);
            index++;
        }
        return result;
    }
};

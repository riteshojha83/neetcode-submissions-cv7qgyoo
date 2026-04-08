class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mymap;
        multimap<int,int,greater<int>>sorting;
         vector<int>result;
        for(auto &vitr : nums)
            {
                auto mitr = mymap.find(vitr);
                if(mitr == mymap.end())
                {
                   mymap.emplace(vitr,1);
                }
                else
                {
                    mitr->second++;                   
                }
            }
             for(auto &mitr : mymap)
             {
                 sorting.insert(make_pair(mitr.second,mitr.first));
             }
             int count=1;
             for(auto &mitr : sorting)
             {
                result.push_back(mitr.second);
                if (count==k)
                {
                    return result;
                }
                count++;
             }
             return result;
    }
};

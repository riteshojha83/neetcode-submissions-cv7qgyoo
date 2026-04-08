class Solution {
public:
       
    string calculate_hash(string str)
    {
        string sorted_str = str;
        sort(sorted_str.begin(), sorted_str.end());
        return sorted_str;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mymap[101];
        vector<vector<string>>result;
        int max_length = 0;
          for(auto itr : strs)
          {
            string hash = calculate_hash(itr);
            if(itr.length() > max_length)
            {
                max_length = itr.length();
            }
            auto fitr = mymap[itr.length()].find(hash);
            
               if(fitr != mymap[itr.length()].end())
               {
                 
                    fitr->second.emplace_back(itr);
               }
               else
               {
                vector<string>temp;
                temp.emplace_back(itr);
                mymap[itr.length()].emplace(hash,temp);
               
               }
          }
        
          for(int i=0;i<=max_length;i++)
          {
                for(auto mitr : mymap[i])
                {                   
                   result.emplace_back(mitr.second);

                }
          }
          return result;
    }
};

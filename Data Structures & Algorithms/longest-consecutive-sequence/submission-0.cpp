class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>myset;
        for(auto &it : nums)
        {
            myset.emplace(it);
        }
        int count = 0 ;
        int max= 0    ;
        int prev =  1  ;
        for(auto &it : myset)
        {
            if(count!=0)
            {
               if(it != prev+1)
               {
                   if(max<count)
                   {
                    max = count;
                   }
                   count=0;
               }
            }
            prev=it;
            count++; 
        }
         if(max<count)
                   {
                    max = count;
                   }
       return max;
    }
};

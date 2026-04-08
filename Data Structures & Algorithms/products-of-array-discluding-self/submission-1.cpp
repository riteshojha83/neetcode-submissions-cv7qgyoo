class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int to_right[1002];
         int to_left [1002];
         to_right[0]=to_left[0]=1;
         int size = nums.size();
         to_right[size+1]=to_left[size+1]=1;
         int counter =1;
         vector<int>result;
         for(auto &it : nums)
         {
           to_right[counter] = to_right[counter-1] * it;
          
           counter++;
         }
         counter--;
         for (size_t i = size; i-- > 0; )
         {
            to_left[counter] = to_left[counter + 1] * nums[i];
            counter--;
         }
         for(int i=1; i <= size;i++)
         {
            result.push_back(to_right[i-1]*to_left[i+1]);
         }
         return result;


    }
};

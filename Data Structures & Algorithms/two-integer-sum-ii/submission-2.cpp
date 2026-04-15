class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        vector<int>result;
        int right = numbers.size()-1;
        while(1)
        {
         if(numbers[left]+ numbers[right]>target)
         {
            right--;
         }
         else if(numbers[left]+ numbers[right]<target)
         {
            left++;
         }
         else 
         {
            result.emplace_back(left+1);
            result.emplace_back(right+1);
            return result;
         }
        }
    }
};

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;
        int max =0;
        while(left!=right)
        {
            int temp=0;
            if(heights[left]<=heights[right])
            {
               temp = heights[left] * (right-left);
               left++;
            }
            else if(heights[left]>=heights[right])
            {
               temp = heights[right] * (right-left);
               right--;
            }
            if(max<temp)
            {
                max =temp;
            }

        }
        return max;
        
    }
};

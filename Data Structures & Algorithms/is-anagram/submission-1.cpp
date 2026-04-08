class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        {
            return false;
        }
        int arr[26];
        for(int i=0 ;i<26;i++)
        {
            arr[i]=0;
        }
        for(char c : s)
        {
            arr[c-'a']++;
        }
        for(char c : t)
        {
            if(arr[c-'a']==0)
            {
                return false;
            }
            else
            {
                arr[c-'a']--;
            }
            
        }
        return true;
    }
};

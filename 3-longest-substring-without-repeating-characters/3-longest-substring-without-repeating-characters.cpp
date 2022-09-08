class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> letters;
        int res=0, i=0,j=0;
        
        while(j<s.size()){
            if(letters.find(s[j])==letters.end()){
                letters.insert(s[j]);
                res=max(res,j-i+1);
                j++;
            }else{
                letters.erase(s[i]);
                i++;
            }
        }
        return res;
        
        
    }
};
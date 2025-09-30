class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> map;
        int lastcount=0;
        int i=0;
        for(int j=0;j<s.size();j++){
            map[s[j]]++;
            if(map[s[j]]>1){
                while(map[s[j]]>1) {
                    map[s[i]]--;
                    i++;
                }
            }
            lastcount=max(lastcount,j-i+1);
        }
        return lastcount;
    }
};
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> s1map, s2map;
        for(char &i : s1){
            s1map[i]++;
        }
        for(int i =0; i<s2.size(); i++){
            s2map[s2[i]]++;
            if(i>=s1.size()){
                s2map[s2[i-s1.size()]]--;
                if(s2map[s2[i-s1.size()]]==0){
                    s2map.erase(s2[i-s1.size()]);
                }
            }
            if(s1map==s2map){
                return true;
            }
        }
        return false;
    }
};
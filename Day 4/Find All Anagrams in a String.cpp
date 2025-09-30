class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        unordered_map<char,int> smap, pmap;
        for(char &i : p){
            pmap[i]++;
        }
        for(int i =0; i<s.size(); i++){
            smap[s[i]]++;
            if(i>=p.size()){
                smap[s[i-p.size()]]--;
                if(smap[s[i-p.size()]]==0){
                    smap.erase(s[i-p.size()]);
                }
            }
            if(smap==pmap){
                ans.push_back(i-p.size()+1);
            }
        }
        return ans;
    }
};
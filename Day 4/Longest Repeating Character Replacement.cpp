class Solution {
public:
    int characterReplacement(string s, int k) {
        int st=0, e=0;
        int mfreq=0;
        int ans= 0;
        vector<int> freq(256,0);
        while(e<s.size()){
            freq[s[e]]++;
            mfreq=max(mfreq, freq[s[e]]);
            int window = e-st+1;
            if(window - mfreq > k){
                freq[s[st]]--;
                st++;
            }
            ans=max(ans, windowbv  );
            e++;
        }
        return ans;
    }
};
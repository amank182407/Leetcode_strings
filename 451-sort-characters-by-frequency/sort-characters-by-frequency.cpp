class Solution {
public:
    string frequencySort(string s){
        
        vector<pair<int,char>> hash('z'+1,{0,0});
        for(int i=0;i<s.length();i++)
        {
            hash[s[i]]={hash[s[i]].first+1,s[i]};
        }
        sort(hash.begin(),hash.end());
        string str="";
        for(auto p: hash)
        {
            str=string(p.first,p.second)+str;
        }
        return str;
    }
};
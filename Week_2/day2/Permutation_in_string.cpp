class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size();

        if(n1>n2)return false;

        vector<int>one(26,0);
        vector<int>two(26,0);

        //fill initial window
        for(int i=0;i<n1;i++)
        {
            one[s1[i]-'a']++;
            two[s2[i]-'a']++;
        }

        if(one == two)return true;

        //slide window
        for(int i=n1;i<n2;i++)
        {
            two[s2[i]-'a']++; //add
            two[s2[i-n1]-'a']--;//remove left one
            if(one == two)return true;
        }
        return false;
    }
};
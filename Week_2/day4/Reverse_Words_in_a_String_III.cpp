class Solution {
public:
    string reverseWords(string s) {
        string store;
        string ans;
        for(char c : s)
        {
            if(c==' ')
            {
                reverse(store.begin(),store.end());
                ans+=store;
                store="";  //empty store
                ans+=c; //add the whitespace
            }
            else store+=c;
        }
        //adding last word
        reverse(store.begin(),store.end());
        ans+=store; 
        return ans;
    }
};
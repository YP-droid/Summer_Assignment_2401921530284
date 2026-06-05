class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        //remove non alpha numeric chars
        for(char c:s)
        {
            //ascii value for A = 65,Z=90, a=97 , z=122
            if((int(c)>=65 and int(c)<=90) or (int(c)>=97 and int(c)<=122)){
                //if capital
                if((int(c)>=65 and int(c)<=90))
                {
                    c+=32;
                }
                s1+=c;
            }
            //if number
            else if(int(c)>=48 and int(c)<=57)s1+=c;
        }
        int left=0;
        int right=s1.size()-1;
        //palindrome logic
        while(left<right)
        {
            if(s1[left]!=s1[right])return false;
            left++;right--;
        }
        return true;
    }
};
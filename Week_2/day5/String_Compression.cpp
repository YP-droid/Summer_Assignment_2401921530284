class Solution {
public:
    int compress(vector<char>& c) {
        char last=c[0];
        int num=1;  //count frequency of number
        int prev=1;
        for(int i=1;i<c.size();i++)
        {
            if(c[i]==last)num++;
            else if(c[i]!=last)
            {
                if(num>1)
                {
                    //multi digit
                    if(num>9)
                    {
                        //extract digits
                        string temp;
                        while(num>0)
                        {
                            int r = num%10;
                            temp+=(r+'0');  //we need char representation of num like '1'. 1+'0' = 1+48 = 49='1'
                            num/=10;
                        }   
                        reverse(temp.begin(),temp.end());
                        for(int j=0;j<temp.size();j++)
                        {
                            c[prev++] = temp[j];
                        }
                    }
                    else
                    {
                        
                        c[prev] = (num+'0');
                        prev++;
                    }
                }

                last=c[i];  //update last
                c[prev]=last;  //add curr char
                num=1;  //we encountered new no. 1 times
                prev++;
            }
        }

        //if last number was continuous, we need to add its freq
        if(num>1)
        {
            if(num>9)
            {
                string temp;
                while(num>0)
                {
                    int r = num%10;
                    temp+=(r+'0');  //we need char representation of num like '1'. 1+'0' = 1+48 = 49='1'
                    num/=10;
                }   
                reverse(temp.begin(),temp.end());
                for(int j=0;j<temp.size();j++)
                {
                    c[prev++] = temp[j];
                }
            }
                else
                {
                        
                    c[prev] = (num+'0');
                    prev++;
                }
        }
        return prev;
    }
};
#include<iostream>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string ans;
        int max=0;
        bool tr=true;
        for(int i=0;i<s.size();i++)
        {
        	ans=s[i];
            tr=true;
            for(int j=i+1;j<=s.size();j++)
            {
                if(tr)
                {
                   for(int k=0;k<ans.size();k++)
                    {
                        if(ans[k]==s[j])
                        {
                        	if(max<=ans.size())
                            {
                                max=ans.size();
                            }
                            ans="";        
                            tr=false;
                            break;
                        }
                    } 
                    
                    ans+=s[j];
                    //cout<<"s[j]"<<ans.size()<<ans<<endl;
                }
                else
                {
                    break;
                }
                
            }
        }
     return max;
    }
};

int main()
{
	
	cout<<Solution().lengthOfLongestSubstring("c");
	
	
	
	return 0;
}

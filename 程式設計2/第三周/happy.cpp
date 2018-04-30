class Solution {
public:
    bool isHappy(int n) 
    {
        set<int> dup;
        
        while(1)
        {
            dup.insert(n);
            n=addDigital(n);
            if(n==1)
            {
                 return true;
            }               
            else if(dup.find(n) != dup.end())
            {
                return false;
            }
                
        }
           
            
    }
    int addDigital(int n)
        {
            int sum=0;
            while(1)
            {
                int sum;
                sum += (n%10) * (n%10);
                n/=10;
                if(n==0) break;
            }
      
            return sum;
        }
    
    
       
    

};
int

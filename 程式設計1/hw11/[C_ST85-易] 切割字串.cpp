#include<iostream>  
#include<string>  
#include<map>  
using namespace std;  
  
int main()  
{  
    string s;  
    int count = 0;  
    string p[] = {"/n","/t","/a","/b","//" };  
    getline(cin, s);  
    for(int i=0;i<5;i++)  
    {  
        string p1 = p[i];  
        string q1 = "@@";  
        int fpos = 0;  
        while(1)  
        {  
            fpos = s.find(p1, fpos);  
            if(fpos!=string::npos)  
            {  
                count++;  
                s.replace(fpos, p1.size(), q1);  
                fpos += p1.size();  
                  
            }  
            else  
            {  
                break;  
            }  
        }  
          
    }  
    cout << count << endl;  
  
}  

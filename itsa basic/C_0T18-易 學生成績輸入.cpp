#include<iostream>

using namespace std;

class Std{
private:
		int chn;
		int eng;
		int math;
		int disp(int,int,int);
		int disp(int,int);
		int disp();
		};
	    
	int Std::disp(int chn,int eng,int math)
	{
		cout<<"s1";
		cout<<chn;
		cout<<eng;
		return math;
	}
	int Std::disp(int chn,int eng)
	{
		cout<<"s2";
		cout<<chn;
		cout<<eng;
		return -1; 
	}
	int Std:: disp()
	{
		cout<<"s3";
		cout<<0;
		cout<<-1;
		return -1;
	}

int main()
{
	Std std;
	//cin>>std.chn;
	//cin>>std.eng;
	//cin>>std.math;
	std.disp(1,2,3);
	return 0;
}

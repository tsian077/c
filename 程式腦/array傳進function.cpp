#include<iostream>

using namespace std;

void func(char *pia){
	while(*pia){
		 cout<<*pia++<<endl;
	}
}

int main(){
	char ia[]={'a','b','c','\0'};
	func(ia);
}

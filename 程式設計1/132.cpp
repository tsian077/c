#include <iostream>
#include <algorithm>
#include<ctime>
using namespace std;

int main () {
  /*int myints[] = {1,2,3,4};


  do {
    cout << myints[0] << " " << myints[1] << " " << myints[2]<<" "<< myints[3] << endl;
  } while (next_permutation(myints, myints+4));
*/
/*int unit_1,unit_10,unit_100,unit_1000;
int temp[5040][4];
int tmp=0;
for(int i=0;i<10000;i++)
	{
		unit_1 = (i/1)%10;  //以下四行把四位數拆成四個各位數分別存到四個變數 
        unit_10 = (i/10)%10;
        unit_100 = (i/100)%10;
        unit_1000 = (i/1000)%10;
        if(unit_1!=unit_10 && unit_1!=unit_100 && unit_1!=unit_1000 && unit_10!=unit_100 && unit_10!=unit_1000 && unit_100!=unit_1000)
        {
        	
        }
	}
	
		
		
for(int i=0;i<504;i++)
{
	for(int j=0;j<4;j++)
	{
		cout<<temp[i][j];
	}
	cout<<" "; 
}*/
	
 /*	int i,randNum;
    printf("大兜蟲：請問是");
    srand(time(0));
   while(1==1){
    randNum=0;
    for(i=0;i<4;i++)
	{
        randNum *= 10;
        randNum += rand()%10;
    }
        cout<<randNum;
        break;
        if(randNum<remain) break;
        
    }*/ 
   
   
   int temp[10000][4];
   int tmp=0;
   for(int i=0;i<10000;i++)    //產生答案庫 
	{
	int	unit_1 = (i/1)%10;  //以下四行把四位數拆成四個各位數分別存到四個變數 
    int  unit_10 = (i/10)%10;
    int  unit_100 = (i/100)%10;
    int unit_1000 = (i/1000)%10;
    if(unit_1!=unit_10 && unit_1!=unit_100 && unit_1!=unit_1000 && unit_10!=unit_100 && unit_10!=unit_1000 && unit_100!=unit_1000)
        {
        	temp[tmp][0] = unit_1000;
            temp[tmp][1] = unit_100;
            temp[tmp][2] = unit_10;
            temp[tmp][3] = unit_1;
            tmp++;
		}
	}
	int remain=5040;
	int aa,bb;
	int ourA=0,ourB=4;
	int i,j,k;
	int refer[4]={3,2,1,0};
	cin>>ourA>>ourB;
	
   	for(i=0;i<remain;i++)
	{
		aa=bb=0;
		for(j=0;j<4;j++)     //找跟我們的猜測一樣的 
		{
			for(k=0;k<4;k++)
			{
				if(temp[i][j]==refer[k])   
				{
					if(j==k)
					aa++;
					else
					bb++;
				}
			}
					
		}
		if(!((aa==ourA)&&(bb==ourB)))
		{
			for(j=i;j<remain;j++)
			{
				for(k=0;k<4;k++)
				{
					temp[j][k]=temp[j+1][k];
				}
			}
			remain--;
			i--;
		}
	}


  return 0;
}



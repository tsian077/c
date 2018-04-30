#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
int randnum; //裝亂數 
int temp[10000][4];	//答案庫陣列
int remain=5040; //答案庫裡的答案數 
int main()
{
	string myDigits; //自己的數字
	string enemyDigits; //對手的數字
	string enemyGuess; //對手猜的數字
	int option; //選項, 若為 1，讓對手猜。若為 2，自己猜。
	int ourA = 0, ourB = 0;  //自己 幾 A 幾 B
	int eA = 0, eB = 0; //對手 幾 A 幾 B
	int tmp=0;
	int unit_1,unit_10,unit_100,unit_1000;
	for(int i=0;i<10000;i++)    //產生答案庫 
	{
		unit_1 = (i/1)%10;  //以下四行把四位數拆成四個各位數分別存到四個變數 
        unit_10 = (i/10)%10;
        unit_100 = (i/100)%10;
        unit_1000 = (i/1000)%10;
        if(unit_1!=unit_10 && unit_1!=unit_100 && unit_1!=unit_1000 && unit_10!=unit_100 && unit_10!=unit_1000 && unit_100!=unit_1000)
        {
        	temp[tmp][0] = unit_1000;
            temp[tmp][1] = unit_100;
            temp[tmp][2] = unit_10;
            temp[tmp][3] = unit_1;
            tmp++;
		}
	}		
	
	//cout << "請輸入自己的數字" << endl;//使用者自己輸入自己的數字
	cin >> myDigits;
	//進入無窮迴圈，直到本盤結束
	while (1)
	{
		//cout << "請輸入選項 1 (對方猜) or 2 (我方猜): " << endl;
		cin >> option; //讀入選項
		cin.ignore(); //讀入整數後，記得要 ignore，以免之後讀字串出錯
		if (option == 1)
		{
			eA=0;
			eB=0;
			//對手要猜了
			cout << "請輸入對手所猜的數字" << endl;
			cin >> enemyGuess;
			for(int i=0;i<4;i++)
			{
				int fpos=0;
				char emch=enemyGuess[i];
				int com=myDigits.find(emch,0);
				if(com>=0&& com==i)
				{
					eA++;
				}
				else if(com>=0 && com!=i)
				{
					eB++;
				}
		
			}
			cout << "對手的猜測是 " << eA << " A " << eB << " B" << endl;
			if (eA == 4)
			{
				
				cout << "您猜對了，我真遜，如果有下輩子的話，希望能做您忠實的奴隸" << endl;
				break;
			}
		}
		else if (option == 2)
		{
			//換自己猜囉
			cout << "我方的猜測是: "  << endl;
			srand(time(0));
			while(1==1)
			{
				randnum=0;
				for(int i=0;i<4;i++)
				{
					randnum *=10;
					randnum +=rand()%10;
				}
				if(randnum<remain) break;
			}
			for(int i=0;i<4;i++)
			{
				cout<<temp[randnum][i];
			}
			cout << "請輸入猜測的結果" << endl;
			cin >> ourA >> ourB;
			 
			//處理不符合的數 將不適合的刪除 
			int i,j,k,aa,bb;
			int refer[4];		//存剛剛的猜測 
			for(i=0;i<4;i++)   
			{
				refer[i]=temp[randnum][i];
			} 
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
		}
		else
		{
			cout << "搞屁呀！重新輸入 (1/2):" << endl;
		}
	}
	return 0;
}

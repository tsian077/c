#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
int randnum; //�˶ü� 
int temp[10000][4];	//���׮w�}�C
int remain=5040; //���׮w�̪����׼� 
int main()
{
	string myDigits; //�ۤv���Ʀr
	string enemyDigits; //��⪺�Ʀr
	string enemyGuess; //���q���Ʀr
	int option; //�ﶵ, �Y�� 1�A�����q�C�Y�� 2�A�ۤv�q�C
	int ourA = 0, ourB = 0;  //�ۤv �X A �X B
	int eA = 0, eB = 0; //��� �X A �X B
	int tmp=0;
	int unit_1,unit_10,unit_100,unit_1000;
	for(int i=0;i<10000;i++)    //���͵��׮w 
	{
		unit_1 = (i/1)%10;  //�H�U�|���|��Ʃ�|�ӦU��Ƥ��O�s��|���ܼ� 
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
	
	//cout << "�п�J�ۤv���Ʀr" << endl;//�ϥΪ̦ۤv��J�ۤv���Ʀr
	cin >> myDigits;
	//�i�J�L�a�j��A���쥻�L����
	while (1)
	{
		//cout << "�п�J�ﶵ 1 (���q) or 2 (�ڤ�q): " << endl;
		cin >> option; //Ū�J�ﶵ
		cin.ignore(); //Ū�J��ƫ�A�O�o�n ignore�A�H�K����Ū�r��X��
		if (option == 1)
		{
			eA=0;
			eB=0;
			//���n�q�F
			cout << "�п�J���Ҳq���Ʀr" << endl;
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
			cout << "��⪺�q���O " << eA << " A " << eB << " B" << endl;
			if (eA == 4)
			{
				
				cout << "�z�q��F�A�گu���A�p�G���U���l���ܡA�Ʊ�వ�z���ꪺ����" << endl;
				break;
			}
		}
		else if (option == 2)
		{
			//���ۤv�q�o
			cout << "�ڤ誺�q���O: "  << endl;
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
			cout << "�п�J�q�������G" << endl;
			cin >> ourA >> ourB;
			 
			//�B�z���ŦX���� �N���A�X���R�� 
			int i,j,k,aa,bb;
			int refer[4];		//�s��誺�q�� 
			for(i=0;i<4;i++)   
			{
				refer[i]=temp[randnum][i];
			} 
			for(i=0;i<remain;i++)
			{
				aa=bb=0;
				for(j=0;j<4;j++)     //���ڭ̪��q���@�˪� 
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
			cout << "�d���r�I���s��J (1/2):" << endl;
		}
	}
	return 0;
}

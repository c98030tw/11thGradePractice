#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int a[4],b[4],i,j,A=0,B=0;
	char answer[4];
	
	a[0]=2;
	a[1]=0;
	a[2]=9;
	a[3]=5;
	
	while(1)//�����]�P�w��true -->�����i�J�j�� 
	{
		cout<<"�п�J4��Ʀr:"; 
		cin>>answer;
		
		b[0]=answer[0]-48;//ascii�X-48 --> �T�O�Ҭ��Ʀr
		b[1]=answer[1]-48;
		b[2]=answer[2]-48;
		b[3]=answer[3]-48; 
		
		for(j=0;j<4;j++)
		{
			for(i=0;i<4;i++)
			{
				if(a[j]==b[i])
				{
					if(j==i)
					{
						A++;
					}
					else
					{
						B++;
					}
				}
			}
		}
		
		cout<<"-->"<<A<<"A "<<B<<"B\n";
		
		if(A==4)
		{
			cout<<"BINGO!";
			break;
		}
		
		A=0;
		B=0;
	}
	
	return 0;
}

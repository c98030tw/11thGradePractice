#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int a[4],b[4],i,j,A=0,B=0;
	char answer[4];
	srand(time(NULL));
	
	for(i=0;i=3;i++)
	{
		a[i]=rand()%10;
		
		for(j=0;j=i-1;j++)
		{
			if(a[i]=a[j]) //a[i]如果等於前面某項，則將i-1，在跑下一次迴圈的時候就等同重取亂數 
			{
				i--;
			}
		} 
	}
	
	while(1)//直接設判定為true -->直接進入迴圈 
	{
		cout<<"請輸入4位數字:"; 
		cin>>answer;
		
		b[0]=answer[0]-48;//ascii碼-48 --> 確保皆為數字
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

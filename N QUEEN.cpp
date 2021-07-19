#include<iostream>
using namespace std;
static int k=0;
bool issafe(int board[][100],int i,int j,int n)
{
	for(int row=0;row<i;row++)
	{
		
			if(board[row][j]==1)
			{
				return false;
			}
	}
	int x=i;
	int y=j;
	while(x>=0&&y>=0)
	{
		if(board[x][y]==1)
				{
					return false;
				}
	
	x--;
	y--;
}
	x=i;
	y=j;
		while(x>=0&&y<n)
	{
		if(board[x][y]==1)
				{
					return false;
				}
	
	x--;
	y++;
}
return true;
	
}
bool solvequeen(int board[][100],int i,int n)
{ 

	if(i==n)
	{
		cout<<++k<<".\n";
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(board[i][j]==1)
				{
					cout<<"1"<<"  ";
				}
				else
				{
					cout<<"0"<<"  ";
				}
			}
			cout<<endl;
		}
		cout<<endl;
		return false;
	}
	for(int j=0;j<n;j++)
	{
		if(issafe(board,i,j,n))
		{
			board[i][j]=1;
			bool nextrowposs=solvequeen(board,i+1,n);
			if(nextrowposs)
			{
				return true;
			}
			board[i][j]=0;
		}
	}
	return false;
	
}

int main()
{
	int n;
	int board[100][100]={0};
	cout<<"                                                    **GROUP PARTNERS**                                \n";
	cout<<"                                DEEPAK KUMAR               |            DEEPAK KUMAR                      \n";
	cout<<"                                ROLL NO-2k19/CO/111        |	        ROLL NO-2k19/CO/112               \n";
		cout<<"                                                    ENTER '0' FOR EXIT                                \n";                              ;
		cout<<"                                       PRESS ANY NUMBER KEY TO CONTINUE OR '0' FOR EXIT :-                     \n";
	cin>>n;
	if(n==0)
	{
		cout<<"YOU CHOOSE EXIT OPTION\nHAVE A NICE DAY\n";
	}
	while(n>0)
		{
			
		cout<<"Enter order or QUEEN number -\n";
		cin>>n;
			if(n==0)
	{
		cout<<"YOU CHOOSE EXIT OPTION\nHAVE A NICE DAY\n";
	}
		
	
		else{
			cout<<endl;
	solvequeen(board,0,n);
	cout<<"TOTAL NO OF SUCH ARRANGEMENT POSSIBLE :"<<k<<endl;
	k=0;
	cout<<endl;
	}

}
	return 0;
	
	
}

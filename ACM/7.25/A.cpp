#include<iostream>
using namespace std;
int count = 0;
int chess[6][6]={0};
int notDanger(int row,int col ){
	int i,k;
	for(i=0;i<6;i++){
		if(chess[i][col]==1)
		return 0;
	}
	for(i=row,k=col;i>=0&&k>=0;i--,k--)
	if(chess[i][k]==1)
	return 0;
	
	for(i=row,k=col;i>=0&&k<6;i--,k++)
	if(chess[i][k]==1)
	return 0;
	
	return 1;
}

void Print(){
	int i,j;
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(chess[i][j]==1)
			cout<<j+1<<" ";
		}
	}
	cout<<endl;
}
void EightQueen( int row )
{
	int col;
	if( row>5 )                       
	{
		Print();                      
		count++;
		return ;
		
	}

	for( col=0; col < 6; col++ )        
	{
		if( notDanger( row, col ) )   
		{
			chess[row][col]=1;
			EightQueen(row+1);
			
			chess[row][col]=0;           
		}
	}
}


int main()
{
	EightQueen(0);        
	printf(" %d \n\n", count);
	return 0;
}


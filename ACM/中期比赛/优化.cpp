#include<stdio.h>
#include<math.h>
int min=99999,step;
void fbs(int x,int nowx,int step){
	if(x<0)return ;
	if(x=nowx){
		if(step<min) min=step;
    	return ;
	}
	fbs(x,nowx+1,step+1); 
	fbs(x,nowx-1,step+1); 
	fbs(x,nowx*2,step+1);
}
int main(){
	int x,y;
	scanf("%d %d",&x,&y);
	fbs(y,x,0);
	printf("%d",step);
	return 0;
}

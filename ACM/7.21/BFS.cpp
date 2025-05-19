#include<iostream>
using namespace std; 
    int answer = 9999;//先设置answer为无穷大 
    void dfs（int now-x,int now-y,int now-ans）
    {
        if(now-x==3&&now-y==3)//如果到达了目的地，那么把now-ans与answer相比，如果now-ans比answer小的话，就替代它
            if(now-ans<answer)
            { 
    answer = now-ans;
    return ;
            }
            if(x<3)//如果没有到达边界
            {
                dfs(now-x+1,now-y,now-ans+this-socre);//递归向下进行，分数加上本格的分数，x+1  
                } 
            if(y<3)//如果没有到达边界
            {
                dfs(now-x,now-y+1,now-ans+this-socre)//递归向右进行，分数加上本格的分数，y+1
            }   
            return；
    }
    
int main(){
	
}

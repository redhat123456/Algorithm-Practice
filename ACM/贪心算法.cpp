#include<iostream>
#include<string.h>
using namespace std;
   int candy(cahr ratings[]) {
        int res=strlen(ratings);
        vector<int> tmp(res,0);
        for(int i=1;i<res;i++)
            if(ratings[i]>ratings[i-1]) 
                tmp[i]=tmp[i-1]+1;
        for(int i=res-1;i>0;i--)
            if(ratings[i-1]>ratings[i] && tmp[i-1]<tmp[i]+1) //比正序多了一个判断
                tmp[i-1]=tmp[i]+1;
        for(int i=0;i<res;i++)
            res+=tmp[i];
        return res;
    }
	
	int main(){
		int t;
		char ratings[1000];
		cin>> t;
		for(int i=0;i<t;i++)
		scanf("%d",&ratings[i]);
		for(int i=0;i<t;i++)
		cout<<ratings[i]<<endl;
		cout<<candy(ratings)<<endl;
		return 0;
	} 

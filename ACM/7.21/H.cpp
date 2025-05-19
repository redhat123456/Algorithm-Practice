/*#include<stdio.h>
#include<string.h>
int main(){
	int a[50],n,sum1,sum2,i,t,j;
	scanf("%d",&n);
	scanf("%d",&sum1);
	for(i=0;i<n,i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			
			if(t=4&&sum2==sum1){
			printf("YES");
			break;
			}
		}
	}
	printf("NO");
	return 0;
}*/
#include <iostream>
#include <cstring>
 
using namespace std;
 
const int N = 1000; 
 
int arr[N]; // 存储几何元素
bool vis[N]; // 存储集合状态
int valSum;  //当前和
 
void slove(int i , int n , int m){
 
	//超出范围
	if(i > n){
		return ;
	}
 
	// 取数
	vis[i] = true;
	valSum += arr[i];
 
 
	//满足  输出
	if(valSum == m){
		printf("{");
		for(int j = 0; j <= i; j++){
			if(vis[j] == true){
				printf("%d,",arr[j]);
			}
		}
		printf("}\n");
	}else if(valSum < m){     // 不足  继续取数
		slove(i+1,n,m);
	} 
 
 
	//回溯
	vis[i] = false;
	valSum -= arr[i];
 
 	slove(i+1,n,m);
 	return ;
}
 
int main(int argc, char const *argv[])
{
	int num,sum;// num 数组长度  sum 目标和
	scanf("%d%d",&num,&sum);
	for(int i = 0; i < num ;i++){
		scanf("%d",&arr[i]);
	}
 
	slove(0,num,sum);
	return 0;
}

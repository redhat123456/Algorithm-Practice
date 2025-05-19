InitStack (&S)//操作结果:构造一个空栈S。
void Init(SqStack s){
	s.base=(int *)malloc(size*sizeof(int));
	s.top=s.base;
	s.stacksize=size;
} 

Push(&S,e)//初始条件:栈S已存在  操作结果:插入元素e为新的栈顶元素
void push(SqStack s,int e){
	if(s.top-s.base>s.stacksize){
		s.base=(int*)realloc(s.base,(s.stacksize+increasize)*sizeof(int));
		s.top=s.base+s.stacksize;
		s.stacksize+=incresize;
	}
	*s.top++=e;
} 

Pop(&S,&e)//初始条件：栈S已存在且非空  操作结果：删除S的栈顶元素，并用e返回其值
void pop(SqStack s,int e){
	if(s.top!=s.base){
		e=*(--s.top);	}
	cout<<e<<endl;
} 

void Print(SqStack *s){
	int * temp;
	temp = s->top;
	while(temp != s->base){
	temp--;
	printf("%d ",*temp);
	}
}

//应用：
void conversion(){
	InitStack(S);
	scanf("%d",N);
	while(N){
		Push(S,N%8);
		N=N/8;
	}
	while(!StackEmpty(S)) {
		Pop(S,e);
		printf("%d",e);
	}
} 

//栈的递归调用
#include<stdio.h>
#include<iostream>
using namespace std;
int f(int m){
	if(m==1) return 1;
	else {
		cout<<m<<endl;
		return f(m-1);
	}
} 
int main(){
	int n;
	int f(int m);
	cout<<"请输入一个大于1的数："<<endl;
	cin>>n;
	cout<<f(n)<<endl;
	return 0;
}
/*#include<stdio.h>
#include<iostream>
using namespace std;
int f(int n);
int main(){
	int n,sum;
cout <<"请输入一个数字"<<'\n';
	cin>> n;                        //输入一个整数n
sum=f(n);                         //函数调用
	cout<<sum<<'\n';
return 0;
}
int f(int n)
{
    if(n<=1)
		return n;
    else   
    return f(n-1)+f(n-2);//递归调用
}*/ 

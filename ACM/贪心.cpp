#include<cstdio>
using namespace std;
int solve(int A);
const int v[6] = {1,5,10,50,100,500};//面额
int main()
{
    solve(620);
    return 0;
}
int solve(int A)
{
    int sum = 0;
    int c[6] = {3,2,1,3,0,2};//每种硬币的枚数
    for(int i = 0 ; i<6 ; i++) //判断所有硬币的总额
        sum += v[i]*c[i];
    if(sum < A)
    {
        printf("总额不够");
        return 0;
    }
    int temp,index,count = 0;
    while(A != 0)
    {
        int min = 1000000;
        for(int i = 0 ; i<6 ; i++)
        {
            if(A/v[i]<min&&A/v[i]>0&&c[i]>0)//Min表示枚数
            {
                min = A/v[i];//这儿有个问题，如果枚数大于剩余的枚数，下面的c[index]就成负数了，减多了
                temp = v[i];
                index = i;
            }
        }
        count+=min;
        c[index]-=min;
        A = A-min*temp;
        printf("%d\t",temp);
        if(c[index]<0)              //把上面减多的加回来
        {
            A += temp*(-c[index]);
            count+=c[index];
        }


    }
    printf("count:%d",count);
    return 0;
}

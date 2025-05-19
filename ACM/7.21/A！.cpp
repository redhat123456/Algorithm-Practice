#include<stdio.h>
#include<stdbool.h>
int main()
{
    char A[10];
    bool result[300]; int vis[10] 
    scanf("%s",A);
    for(int i = 0; i < 200; i++)
    {
    	result[i] = false;
	}
    for(int i = 0; A[i] != 0; i++)
    {
        if(result[A[i]] == true)
        {
        	printf("NO");
        	return 0;
		} 
		else
		{
			result[A[i]] = true;
		}
    }
    printf("YES");
}

//
// Created by Farazul Hoda on 05/11/19.
#include <stdio.h>
int main()
{
    int i,n,arr[30],x,count=0;
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    for (i = 0; i <n ; i++)
    {
        if(x==arr[i])
            count++;
    }
    if(count>=2)
        printf("1\n");
    else if(count==0)
        printf("-1\n");
    return 0;
}
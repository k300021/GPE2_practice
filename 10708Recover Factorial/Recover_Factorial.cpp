#include <stdio.h>
#define N 2703664
int factors[N] ={0} ;
int main()
{
    int i,j,k,mid,c=1;

    for(i=2;i<N;i++)
    {
        if(!factors[i])
            factors[i]=1;
        for(j=2;(k=i*j)<N&&j<=i;j++)
            if(factors[j]==1)
                factors[k]=factors[j]+factors[i];
    }

    for(i=2;i<N;i++)
        factors[i]+=factors[i-1];
    scanf("%d",&k);
    while(k>=0)
    {
        i = 0;
        j = 2703663;
        while(j-i>1)
        {
            mid = (j+i)/2;
            if(factors[mid]<k)
                i = mid;
            else
                j = mid;
        }
        if(factors[i]==k)
            printf("Case %d: %d!\n",c++,i);
        else if(factors[j]==k)
            printf("Case %d: %d!\n",c++,j);
        else
            printf("Case %d: Not possible.\n",c++);
        scanf("%d",&k);
    }
    return 0;
}

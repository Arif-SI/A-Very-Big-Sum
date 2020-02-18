#include<stdio.h>

int main()
{
    int t,i;
    long long int result=0;
    scanf("%d", &t);
    long int n[t];
    for(i=0;i<t;++i){
        scanf("%li", &n[i]);
        result+= n[i];
    }
    printf("%lli\n", result);
}

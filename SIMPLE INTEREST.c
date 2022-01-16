#include <stdio.h>
int main()
{
    int p,t,r,simple_intrest;
    
    scanf("%d%d%d",&p,&t,&r);
    simple_intrest=p*t*r/100;
    printf("%d",simple_intrest);
    return 0;
}
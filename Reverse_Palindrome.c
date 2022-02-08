#include<stdio.h>
int rev(int n)
{
	int r,rev=0;
	while(n)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	return rev;
}
  int main()
  {
  	int n;
  	scanf("%d",&n);
  	do
  	{
  		n+=rev(n);
	}
	while(n!=rev(n));
	printf("%d",n);
  }
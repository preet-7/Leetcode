class Solution {
public:
    int fib(int n) {
        		int a=0,b=1,c;
				if(n==0 || n==1)
					return n;
				else
				{
				  for(int i=2;i<=n;i++)
				   {
					   c=a+b;
					   a=b;
					   b=c;
				   }  
				}
				return c;
        
        // if(n <= 1) return n;
        // int dp[31];
        // dp[0]=0;dp[1]=1;
        // for(int i = 2 ;i < n + 1 ; i++)
        //     dp[i] = dp[i-1] + dp[i-2];
        // return dp[n];
        
        // if(n==0)return 0;
        // if(n==1)return 1;
        // return fib(n-1)+fib(n-2);
        
		// int d1=0;
		// int d2=1;
		// int sum=0;
		// for(int i=1;i<=n;i++)
		// {
		// sum=d1+d2;
		// d1=d2;
		// d2=sum;
		// }
		// return d1;
               
    }        
};





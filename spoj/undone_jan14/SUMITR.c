#define s(a) scanf("%d",&a)
#define l(i,n) for(i=0;i<n;i++)
#define MAX(X,Y) (X>Y)?X:Y
int A[100][100],dp[100][100];main(){int n,a,i,j,m=0;s(n);while(n>0){s(a);l(i,a){l(j,i+1){s(A[i][j]);dp[i][j]=A[i][j]+(i>0?MAX(dp[i-1][j],(j>0?dp[i-1][j-1]:0)):0);}}l(j,a) m=MAX(m,dp[a-1][j]);n--;printf("%d\n",m);}return 0;}

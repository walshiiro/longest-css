#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,s1;
getline(cin,s);
getline(cin,s1);
int m,n;
    m=s.length();
    n=s1.length();
long dp[m][n];
dp[0][0]=0;
for(int i=1;i<=m;i++)
    dp[0][i]=0;
for(int i=1;i<=n;i++)
    dp[i][0]=0;
for(int i=1;i<=m;i++)
    for(int j=1;j<=n;j++) {
        if (s[i] == s1[j])
            dp[i][j] = dp[i - 1][j - 1] + 1;

        else if (dp[i][j - 1] > dp[i - 1][j])
            dp[i][j] = dp[i][j - 1];
        else
            dp[i][j] = dp[i - 1][j];
    }
cout<<dp[m][n];













}

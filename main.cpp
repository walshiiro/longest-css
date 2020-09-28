#include <bits/stdc++.h>
using namespace std;

string s, s1,s2="";
int m, n;
int dp[100][100];
void truyvet()
{

    if(m*n==0)
       return;
    if(s[m-1]==s1[n-1])
    {
       s2=s[m-1]+s2;
        m--;
        n--;
    }
    else if (dp[m-1][n]==dp[m][n])
        m--; else n--;
        truyvet();
}
int main() {

    getline(cin, s);
    getline(cin, s1);

    m = s.length();
    n = s1.length();

    dp[0][0] = 0;
    for (int i = 1; i <= m; i++)
        dp[0][i] = 0;
    for (int i = 1; i <= n; i++)
        dp[i][0] = 0;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++) {
            if (s[i] == s1[j])
                dp[i][j] = dp[i - 1][j - 1] + 1;

            else if (dp[i][j - 1] > dp[i - 1][j])
                dp[i][j] = dp[i][j - 1];
            else
                dp[i][j] = dp[i - 1][j];
        }
    truyvet();
        cout<<s2;
}

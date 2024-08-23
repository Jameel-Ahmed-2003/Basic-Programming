#include <iostream>
#include <vector>
using namespace std;

void longestCommonSubsequence(string s1, string s2) {
    int m = s1.size();
    int k = s2.size();
    
    // Initialize dp array
    vector<vector<int>> dp(m + 1, vector<int>(k + 1, 0));
    
    // Fill the dp array using the dynamic programming approach
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= k; j++) {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
        }
    }
    
    // Output the length of the longest common subsequence
    cout << "Length of the longest common subsequence: " << dp[m][k] << endl;
}

int main() {
    string s1, s2;
    cout << "Enter the first string: ";
    getline(cin, s1);
    cout << "Enter the second string: ";
    getline(cin, s2);
    
    longestCommonSubsequence(s1, s2);
    return 0;
}

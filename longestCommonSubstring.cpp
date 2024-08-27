//leetcode problem longest common substring
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int maxCommStr(const string& s1, const string& s2) {
    int m = s1.length();
    int n = s2.length();
    int res = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int curr = 0;
            while ((i + curr) < m && (j + curr) < n 
                   && s1[i + curr] == s2[j + curr]) {
                curr++;
            }
            res = max(res, curr);
        }
    }
    return res;
}

int main() {
    string s1 = "geeksforgeeks";
    string s2 = "practicewritegeekscourses";
    cout << maxCommStr(s1, s2) << endl;
    return 0;
}

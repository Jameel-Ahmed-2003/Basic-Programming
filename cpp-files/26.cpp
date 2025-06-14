/*
CPP program
input1 : notebookpaper
output1:
n-o-tebookpap-e-r
not-e-bookp-a-per
noteb-o--o-kpaper
*/
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    string s,sub;
    cin >> s;
    string vowels = "aeiouAEIOU";
    vector<int> vi;
    for (size_t i = 0; i < s.size(); i++)
    {
        if (any_of(vowels.begin(), vowels.end(), [&](char ch) { return ch == s[i]; }))
        vi.push_back(i);
    }
    while (vi.size() > 1)
    {
        int start = vi.front();
        int end = vi.back();
        sub=s.substr(0,start);
        cout<<sub;
        sub = s.substr(start, end - start+1);
        cout<<"-"<<sub[0]<<"-"<<sub.substr(1,sub.size()-2)<<"-"<<sub[sub.size()-1]<<"-";
        sub=s.substr(end+1,s.size()-end);
        cout<<sub<<endl;
        vi.erase(vi.begin());
        vi.pop_back();
    }

    return 0;
}

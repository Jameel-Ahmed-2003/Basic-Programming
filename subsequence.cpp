#include<iostream>
#include<math.h>
using namespace std;

int main() {
    string s = "jameel";
    int l = s.size();

    // Loop through all possible subsequences
    for(int i = 1; i < pow(2, l); i++)
    {
        string sub = "";
        for(int j = 0; j < l; j++)
        {
            // Check if the j-th bit in i is set (1)
            if(i & (1 << j))
            {
                sub += s[j];
            }
        }
        cout << sub << endl;
    }

    return 0;
}

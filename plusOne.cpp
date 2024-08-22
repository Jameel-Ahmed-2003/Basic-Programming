//plus one leet code problem
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    for(int i=digits.size()-1; i>=0;i--)
    {
        if(digits[i]+1<10)
        {
            digits[i]++;
            return digits;
        }
        else
        digits[i]=0;
    }
    if(digits[0]==0)
    digits.insert(digits.begin(),1);
    return digits;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (size_t i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int>newVector=plusOne(arr);
    
    for (size_t i = 0; i < newVector.size(); i++) {
        cout << newVector[i] << " ";
    }
    cout << endl;
    return 0;
}

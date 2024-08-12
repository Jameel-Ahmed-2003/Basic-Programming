/*
Zoho look and say pattern
input : 5
output :
1
11
21
1211
111221

explanation
1
11 ->the first row has 1 1 so 11 is printed in row2
21 ->the second row has 2 1's so 21 is printed
1211->the 3rd row has 1 2 at first and 1 1 so 1211 is printed
similarly we have to do upto n rows
*/
#include <iostream>
#include <string>

using namespace std;

string lookAndSay(string s) {
  string result;
  int count = 1;
  char current = s[0];

  for (int i = 1; i < s.length(); i++) {
    if (s[i] == current) {
      count++;
    } else {
      result += to_string(count) + current;
      current = s[i];
      count = 1;
    }
  }

  result += to_string(count) + current;
  return result;
}

int main() {
  string s = "1";
  int  n;
  cout<<"n: ";
  cin>>n;
  for (int i = 0; i < n; i++) {
    cout << s << endl;
    s = lookAndSay(s);
  }

  return 0;
}

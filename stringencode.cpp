#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string original_string, encoded_string;
    cin >> original_string;
    int i, count, l1 = original_string.size();
    for (i = 0; i < l1; i++)
    {
        int num = (int)original_string[i] - 96;
        encoded_string.append(num, '1');
        encoded_string += "0";
    }
    cout <<"ENCODED STRING : " <<encoded_string<<endl;
    int l2 = encoded_string.size();
    string decoded_string;
    for (i = 0; i < l2;)
    {
        for(count=0;encoded_string[i] == '1'&&i<l2;count++,i++);
        if (encoded_string[i] == '0'&&i<l2)
        {
            i++;
            int num = count + 96;
            decoded_string += char(num);
        }
    }
    cout<<"DECODED STRING : "<<decoded_string;
    return 0;
}

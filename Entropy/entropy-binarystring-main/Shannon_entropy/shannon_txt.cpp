#include <bits/stdc++.h>
using namespace std;

double entropy(string str, double count, int n)
{
    if (str.length() == 0)
        return -((count / n) * log2f(count / n)); // use log base 2

    if (str[0] == '1')
        count++;

    return entropy(str.substr(1), count, n);
}

int main()
{
    ifstream Myfile_read;
    Myfile_read.open("test.txt");
    string str;
    while (Myfile_read.eof() == 0)
    {
        getline(cin, str);
        //cout << str;
    }
    int n = str.size();
    // cout << "Take a binary string : ";
    // cin >> str;

    int window_size = 10;
    // cout << "What will be the size of window : ";
    // cin >> window_size;

    int count_entropy = 0;

    for (int i = 0; i < n; i++)
    {
        if (i + window_size > n)
            break;

        count_entropy++;
    }

    for (int i = 0; i < count_entropy; i++)
    {
        cout << "Entropy " << i + 1 << " : " << entropy(str.substr(i, window_size), 0, n) << endl;
    }

    return 0;
}
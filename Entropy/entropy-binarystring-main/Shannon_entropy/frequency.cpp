
#include <bits/stdc++.h>
using namespace std;

#define SIZE 26


void printCharWithFreq(string str)
{
	
	int len = str.size();

	cout<<"The length of the string is "<<len<<endl;

	
	int freq[SIZE];

	
	memset(freq, 0, sizeof(freq));

	
	for (int i = 0; i < len; i++)
		freq[str[i] - '0']++;

	
	for (int i = 0; i < len; i++) {

	
		if (freq[str[i] - '0'] != 0) {

			
			cout << str[i]<<"--> " << freq[str[i] - '0'] << " , ";

			
			freq[str[i] - '0'] = 0;
		}
	}
}



int main()
{
	char str[100] = "01010100000111111001001001";
	printCharWithFreq(str);
	return 0;
}

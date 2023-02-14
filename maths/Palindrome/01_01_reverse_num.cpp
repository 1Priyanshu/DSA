// C++ program to reverse a number
#include <bits/stdc++.h>
using namespace std;

int reversDigits(int num)
{
	// converting number to string
	string strin = to_string(num);

	// reversing the string
	reverse(strin.begin(), strin.end());

	// converting string to integer
	num = stoi(strin);

	// returning integer
	return num;
}
int main()
{
	int num = 4562;
	cout << "Reverse of no. is " << reversDigits(num);
	return 0;
}


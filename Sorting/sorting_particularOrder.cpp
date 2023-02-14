// A C++ program to demonstrate
// STL sort() using
// our own comparator
#include <bits/stdc++.h>
using namespace std;

// An interval has a start
// time and end time
struct Interval {
	int start, end;
};

// Compares two intervals
// according to starting times.
// bool compareInterval(Interval i1, Interval i2)
// {
// 	return (i1.start < i2.start);
// }

bool static comparator(vector<int> &x,vector<int> &y){
         return (x[1]>y[1]);    // in  decreasing order based in 2nd element
}

int main()
{


    vector<vector<int>> v = { { 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 } };
	// Interval arr[]
	// 	= { { 6, 8 }, { 1, 9 }, { 2, 4 }, { 3,4 } };
	// int n = sizeof(arr) / sizeof(arr[0]);

	// sort the intervals in increasing order of
	// start time
    sort(v.begin(), v.end(), comparator);
	//sort(arr, arr + n, compareInterval);

	// cout << "Intervals sorted by start time : \n";
	// for (int i = 0; i < n; i++)
	// 	cout << "[" << arr[i].start << "," << arr[i].end
	// 		<< "] ";
    cout<<"{ ";
    for(auto i: v){
        cout<<"{ "<<i[0]<<" , "<<i[1]<<" } ";
    }
    cout<<"}";
	return 0;
}


// bool static comparator(vector<int> &x,vector<int> &y){
//         return (x[1]>y[1]);    // in  decreasing order based in 2nd element
// }
// vector<vector<int>>& arr
// sort(arr.begin(), arr.end(), comparator);

// eg arr = { { 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 } }
// after sorting
//  arr=  {{1,9}, {6,8}, {4,7}, {2,4}};
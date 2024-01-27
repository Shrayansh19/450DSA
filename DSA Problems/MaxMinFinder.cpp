#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	cout << "The code is running" << endl;
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	int maximum = arr[0];
	int minimum = arr[0];
	for(int i = 0; i < n; i++){
		maximum = max(maximum, arr[i]);
		minimum = min(minimum, arr[i]);
	}
	cout << "The Max Value is : " << maximum << endl;
	cout << "The Min Value is : " << minimum << endl;
	
	return 0;
}

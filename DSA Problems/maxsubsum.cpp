#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	//The answer goes here//
	int maxsum = arr[0];
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum = arr[i] + sum;
		maxsum = max(maxsum, sum);
		if (sum < 0) sum = 0;
	}
	cout << maxsum << endl;
	return 0;
}

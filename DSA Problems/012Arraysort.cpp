#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	cout << "The code is running" << endl;
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	
	int start = 0, end = n-1, mid = 0;
	while(end >= mid){
		if(arr[mid] == 0){
			arr[mid] = arr[start];
			arr[start] = 0;
			start++;
			mid++;
		}
		else if(arr[mid] == 1){
			mid++;
		}
		else {
			arr[mid] = arr[end];
			arr[end] = 2;
			end--;
		}
	}
	cout << "The resultant array is : ";
	for(int i = 0; i < n; i++) cout << arr[i] << " ";
	
	return 0;
}

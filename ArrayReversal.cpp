#include <algorithm>
#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main() {
	// Your code goes here;
	int arr[] = {1,2,3,4,5,6,6};
	int size = sizeof(arr) / sizeof(arr[0]);
	int m = 2;
	int start = m + 1;
	int end = size-1;
	while(end > start){
		int x = arr[start];
		arr[start] = arr[end];
		arr[end] = x;
		start++;
		end--;
	}
	cout << "Reversed Array : " << endl ;
	for(int i = 0; i < size; i++){
		cout << arr[i] << " " ;
	}
	return 0;
}

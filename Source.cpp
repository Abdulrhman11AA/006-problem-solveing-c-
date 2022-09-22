#include <iostream>
using namespace std;
int linearsearch(int[], int, int);
int main() {

	int arr[] = { 1,2,3,4,5 };
	
	cout<<linearsearch(arr, sizeof(arr) / sizeof(*arr), 3);

	return 0;
}
int linearsearch(int arr [], int len, int num) {
	for (int i = 0; i < len; i++) {
		if (arr[i] == num) {
			return i;
		}
	} return -1;
}
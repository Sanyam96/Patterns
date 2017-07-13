#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	cout << "\n";

	for( int i = 1; i <= n; i++ ){
		for( int j = 1; j <= n; j++ ){
			if( i >= j ){
				cout << j;
			}
			else{
				cout << " ";
			}
		}
		for( int j = n-1; j >= 1; j-- ){
			if( i >= j ){
				cout << j;
			}
			else{
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << endl;
    return 0;
}



/*

1       1
12     21
123   321
1234 4321
123454321

*/
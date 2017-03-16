#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n;

	int val = 1;
	for( int i = 1; i <= n; i++ ){
		for( int j = 2*n; j > 2*i; j-- ){
			cout << " ";
		}
		for( int j = 1; j <= 2*i - 1; j++ ){
			val = j;
			cout << val << " ";
			val++;
		}
		cout << endl;
	}


	// int i = 1;
	// while( i <= n ){
	// 	int numSpacesRemaining = n - i;
	// 	while( numSpacesRemaining > 0 ){
	// 		cout << " ";
	// 		numSpacesRemaining -= 1;
	// 		int val = 1;
	// 		while( val <= 2 * i - 1){
	// 			cout << val;
	// 			val += 1;
	// 		}
	// 		cout << endl;
	// 		i += 1;
	// 	}
	// }

    return 0;

}

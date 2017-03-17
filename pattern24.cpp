#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n;

	int i = 1;
	while( i <= n ){
		int val = i;
		int j = n - 1;
		while( j >= i){
			cout << " ";
			j -= 1;
		}
		int k = 1;
		while( k <= i ){
			cout << val;
			val += 1;
			k += 1;
		}
		val--;
		while( val > i ){
			val -= 1;
			cout << val;
		}
		cout << endl;
		i += 1;
	}


	// int val = 1;
	// for( int i = 1; i <= n; i++ ){
	// 	for( int j = 2*n; j > 2*i; j-- ){
	// 		cout << " ";
	// 	}
	// 	val = i;
	// 	for( int j = 1; j <= 2*i - 1; j++ ){
	// 		cout << val << " ";
	// 		val++;
	// 	}
	// 	cout << endl;
	// }
    return 0;

}

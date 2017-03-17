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
		val = i;
		for( int j = 1; j <= 2*i - 1; j++ ){
			cout << val << " ";
			val++;
		}
		cout << endl;
	}
    return 0;

}

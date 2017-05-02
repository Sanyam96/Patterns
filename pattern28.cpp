#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for( int i = n; i > 0; i-- ){
		for( int j = n; j > 0; j-- ){
			if( j >= i ){
				cout << j;
			}
			else{
				cout << i;
			}
		}
		cout << endl; 
	}
    return 0;
}


/*
55555
54444
54333
54322
54321
*/
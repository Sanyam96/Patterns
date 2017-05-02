#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for( int i = n; i > 0; i-- ){
		for( int j = n; j > 0; j-- ){
			if( j <= i ){
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
987654321
887654321
777654321
666654321
555554321
444444321
333333321
222222221
111111111
*/
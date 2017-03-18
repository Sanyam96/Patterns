#include <iostream>
#include <ctime>
#include <unistd.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int val = 0;
	for( int i = 0; i < n; i++ ){
		sleep(1);
		for( int j = 0; j < n-i-1; j++ ){
			cout << " ";
		}
		int tempVal = i;
		for( int j = 0; j < (i)+1; j++ ){
			cout << tempVal;
			if(tempVal > 0 ){
				tempVal--;
			}
			else{
				tempVal++;
			}
		}
		for( int j = 0; j < (i); j++ ){
			cout << tempVal;
			if(tempVal >= 0 ){
				tempVal++;
			}
		}
		cout << "\n";

	}
    return 0;
}


/*

    0
   101
  21012
 3210123
432101234


*/

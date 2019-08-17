#include<iostream>
using namespace std;

int main(){

	for (int n = 1; n <= 10000; n++){
		if (n < 10 && ((n*n) % 10==n)){
			cout << n<<endl;
			
		}
		else if (n < 100 && ((n*n) % 100 == n)){
			cout << n << endl;
		}
		else if (n < 1000 && ((n*n) % 1000 == n)){
			cout << n << endl;
		}
		else if (n < 10000 && ((n*n) % 10000 == n)){
			cout << n << endl;
		}
		else if (n < 10000 && ((n*n) % 100000 == n)){
			cout << n << endl;
		}
	}

	return 0;
}
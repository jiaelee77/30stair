#include<iostream>
using namespace std;

int main(){

	for (int n = 1; n <10; n++){
		if ((n*n) % 10==n){
			cout << n<<endl;
			
		}
	}
	for (int n = 10; n <100; n++){
		if ((n*n) % 100 == n){
			cout << n << endl;

		}
	}
	for (int n = 100; n <1000; n++){
		if ((n*n) % 1000 == n){
			cout << n << endl;

		}
	}
	for (int n = 1000; n <10000; n++){
		if ((n*n) % 10000 == n){
			cout << n << endl;

		}
	}

	return 0;
}
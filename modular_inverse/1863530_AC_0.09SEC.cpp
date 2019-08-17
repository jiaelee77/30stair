#include<iostream>
using namespace std;
int modular_inverse;
int x, n, m;
int r;
int is_modular_inverse;
int main(){

	cin >> x >> m;
	for (n = m - 1; n > 0; n--){
		if ( (x * n % m) == 1){
			is_modular_inverse = 1;
		break;
		}
		if (is_modular_inverse)break;
	}

	if (is_modular_inverse) cout << n << endl;
	else cout << "No such integer exists." << endl;
	return 0;
}
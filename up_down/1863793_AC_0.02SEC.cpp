#include<iostream>
using namespace std;
int steps;
int nikky_up, nikky_down;
int byron_up, byron_down;
int nikky,byron;
int nikky_r,byron_r;

int main(){

	cin >> nikky_up >> nikky_down;
	cin >> byron_up >> byron_down;
	cin >> steps;

	nikky_r = steps % (nikky_up + nikky_down);
	byron_r = steps % (byron_up + byron_down);
	if (nikky_r >= 0 && nikky_r < nikky_up){
		nikky = (nikky_up - nikky_down)*(steps / (nikky_up + nikky_down)) + nikky_r;
	}
	else{
		nikky = (nikky_up - nikky_down)*(steps / (nikky_up + nikky_down)) - (nikky_r - nikky_up);
	}

	if (byron_r >= 0 && byron_r < byron_up){
		byron = (byron_up-byron_down)*(steps / (byron_up + byron_down)) + byron_r;
	}
	else{
		byron = (byron_up - byron_down)*(steps / (byron_up + byron_down)) - (byron_r - byron_up);
	}

	if (nikky>byron)cout << "Nikky" << endl;
	else if (nikky < byron)cout << "Byron" << endl;
	else if (nikky == byron) cout << "Tied" << endl;
	
	return 0;
}
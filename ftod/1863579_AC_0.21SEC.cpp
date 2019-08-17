#include<iostream>
using namespace std;

int numerator, denominator, prime_num;

int main(){
	cin >> numerator >> denominator >> prime_num;
	
	cout << "0.";
	int dividee = 1;
	for (int i = 0; i < prime_num; i++){
		dividee = 1;
		if (numerator < denominator) dividee = numerator*10;
		else dividee = numerator;
		cout << dividee / denominator;
		numerator = dividee% denominator;
		
	}
	cout << endl;
	return 0;
}
// Siddharth Ruria
// Linkedin: https://www.linkedin.com/in/ruria-siddharth/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// constants
const int N = 1e6+6;
const int mod= 1e9+7;
const int base= 31;

// modular operations
int add(int a, int b, int mod) {
	int res= (a+b)%mod;
	if(res< 0) {
		res+= mod;
	}
	return res;
}

int multiply(int a, int b, int mod) {
	int res= (a*1LL*b)%mod;
	if(res< 0) {
		res+= mod;
	}
	return res;
}

int power(int a, int b, int mod) {
	int res= 1;
	while(b) {
		if((b%2)== 1) 
			res= multiply(res, a, mod);
		a= multiply(a, a, mod);
		b>>= 1;
	}
	return res;
}

// storage arrays
int pw[N];
int inv[N];
int hashes[N];

// runs only once throughout the lifetime of the code
void pre_computation() {
	// calculates powers of base upto N
	pw[0]= 1;
	for(int i= 1; i< N; ++i) 
		pw[i]= multiply(pw[i-1], base, mod);

	// calculates inverse powers of base upto N
	int base_inverse= power(base, mod-2, mod);
	inv[0]= 1;
	for(int i= 1; i< N; ++i) {
		inv[i]= multiply(inv[i-1], base_inverse, mod);
	}
}

// creates hashes of the string from i= 0 -> (N-1) [only runs once for a string S]
void build(string s) {
	int n= s.length();
	for(int i= 0; i< n; ++i) {
		int char_val= s[i]-'a'+1;
		int mult= multiply(char_val, pw[i], mod);
		if(i== 0) hashes[i]= add(0, mult, mod);
		else hashes[i]= add(hashes[i-1], mult, mod);
	}
}

// returns the hash of the substring S[x, y] => H(S[x....y])
int get_hash(int x, int y) {
	int res= add(hashes[y], (x== 0)? 0: -hashes[x-1], mod);
	res= multiply(res, inv[x], mod);
	return res;
}

// main function
int main() {
	pre_computation();
}

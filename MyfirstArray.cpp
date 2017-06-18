// MyfirstArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// function prototype
int Myarray(int num1, int num2);
void reverse(int a[], int size);
void pyramid(int arr[], int r, int p);
// array implentation 
int Myarr[1];

int main()
{
	int n1;
	int n2;
	cout << "please enter two numbers \n";
	cin >> n1 >> n2;
	// passing values to be added
	Myarray(n1, n2);
	return 0;
}
// initializing Array using sum 

int Myarray(int m1, int m2) {
	int sum = 0;
	Myarr[m1 + m2];
	for (int i = 0; i < m1 + m2; i++) {
		sum = m1 + m2 + i;
		//cout << sum << ":";
		Myarr[i] = sum;
	}
	reverse(Myarr, m1 + m2);
	pyramid(Myarr, m1, m2);
	reverse(Myarr, m1 + m2);
	cout << endl; // space between sum and Array 
	return sum;
}


	// output array element
	void pyramid(int arr[], int m1, int m2) {

	
	int ww = 0;

	// to repeate for loops 
	while (ww < 3)
	{

		// drawing praymid 
		for (int j = 1; j < m1 + m2; j++) {
			//cout << Myarr[j] << "|";
			for (int o = 0; o < j; o++) {
				cout <<Myarr[o] << " ";
			}
			//traingle(Myarr, j);
			cout <<endl;
		}
	
		for (int x = m1 + m2; x > 0; x--) {
			// this will run until is y ==x 
			// then x--
			// x>0
			// loop y<x
			for (int y = 0; y < x; y++) {
				cout << Myarr[y] << " ";
			}
			cout <<endl;
		}
		ww++;
	}
	

}

void reverse(int a[], int size) {

	for (int i = 1; i < size+1; i++) {
		cout << a[size - i]<<" ";
	}
	cout << endl;
	cout << endl;

}







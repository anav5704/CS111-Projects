#include <iostream>

using namespace std;

int main (){
	
	// Part 2a.) //
	
	cout << endl;
	
	cout << "a.) The multiples of 9 from 1-99 are: " <<endl;
	
	for (int i = 99 ; i > 0; i-=9 ){
		
		cout << i <<endl;
				
	}
	cout <<endl;
	
	// Part 2b.) //
	
	int j = 99;
	
	cout << "b.) The multiples of 9 from 1-99 are: " <<endl;
	
	while (j > 0){
		
		cout << j <<endl;
		j -= 9;
		
	}
	cout <<endl;
	
	// Part 2c //
	
	cout << "c.) The multiples of 9 from 1-99 are: " <<endl;
	
	for (int i = 99; i > 0; i--){
		
		if (i % 9 == 0){
			
			cout << i << endl;
		}
	}
	
	return 0;
}
